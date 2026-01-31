#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> two_sum;
        vector<pair<int,int>> numind;
        int n=nums.size();
        for(int i=0;i<n;i++){
            numind.push_back({nums[i],i});
        }
        sort(numind.begin(),numind.end());
        int left=0,right=n-1;
        while(left<right){
            int sum=numind[left].first+numind[right].first;
            if(sum==target){
                two_sum.push_back(numind[left].second);
                two_sum.push_back(numind[right].second);
                break;
            }
            else if (sum>target){
                right--;
            }
            else{
                left++;
            }
        }
        return two_sum;
    }
    vector<int> twoSum_better(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        // vector<int> twosum;
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];
            if(mp.find(req) != mp.end() && mp[req]!=i)
            return {i,mp[req]};
        }   
        return {};
    }
    vector<int> twoSum_brute(vector<int>& nums, int target) {

        // Brute force : n^2

        vector<int> twosum;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j)
                continue;
                if((nums[i]+nums[j])==target){
                    twosum={i,j};
                    break;
                }
            }
        }
        return twosum;
    }
};
int main() {
    Solution sol;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    // cout << sol.twoSumExists(arr, target) << "\n";
    vector<int> res = sol.twoSum(arr, target);
    cout << "[" << res[0] << ", " << res[1] << "]\n";

    return 0;
}
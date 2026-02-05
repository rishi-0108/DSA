#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum_brute(vector<int>& nums) {
        set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int sum=nums[i]+nums[j]+nums[k];
                    vector<int> temp;
                    if(sum==0){
                        temp={nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
    vector<vector<int>> threeSum_better(vector<int>& nums) {
        set<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            set<int> hashset;
            for(int j=i+1;j<n;j++){
                int req=-(nums[i]+nums[j]);
                if(hashset.find(req) != hashset.end()){
                    vector<int> temp={nums[i],nums[j],req};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};
int main() {
    vector<int> arr = {-1,0,1,2,-1,-4};
    int n = arr.size();
    Solution obj;
    vector<vector<int>> res = obj.threeSum_better(arr);

    for (auto &triplet : res) {
        for (auto &num : triplet) cout << num << " ";
        cout << endl;
    }
    return 0;
}
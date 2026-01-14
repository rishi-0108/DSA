#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> presum;
        int sum=0;
        int longest=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum-k;
            if(sum==k){
                longest = max(longest,i+1);
            }
            if(presum.find(rem) != presum.end()){
                longest = max(longest,i-presum[rem]);
            }
            if(presum.find(sum) == presum.end()){
                presum[sum]=i;
            }
        }
        return longest;
    }
};
int main() {
    vector<int> a = { 10, 5, 2, 7, 1, 9 };
    int k = 15;

    Solution solver;
    int len = solver.subarraySum(a, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

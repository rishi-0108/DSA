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
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> threesum;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int sum=nums[i]+nums[j]+nums[k];
                    if(sum==0){
                        threesum.push_back({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        return threesum;
    }
};

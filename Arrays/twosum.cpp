#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*

        Brute force : n^2

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

        */

        // map based approch

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
};
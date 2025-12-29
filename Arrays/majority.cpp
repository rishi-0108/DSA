#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {       
        /*
        
        Hash Maps
        
        unordered_map<int , int> mp;
        int n=nums.size();
        for(auto& x:nums){
            mp[x]++;
        }
        for(auto& pair:mp){
            if(pair.second > (n/2))
            return pair.first;
        }
        return -1;
        
        */

        int ele,c=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(c==0){
                ele=nums[i];
                c=1;
            }
            else if(nums[i]==ele){
                c++;
            }
            else
            c--;
        }
        int cn=0;
        for(auto x:nums){
            if(x==ele)
            cn++;
        }
        if(cn>(n/2))
        return ele;
        else 
        return -1;
    }
};
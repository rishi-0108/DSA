#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(auto& x:nums){
            if(x>=0)
            pos.push_back(x);
            else
            neg.push_back(x);
        }
        int p=0,n=0;
        for(int i=0;i<nums.size();i++){
            if(i%2)
            nums[i]=pos[p++];
            else
            nums[i]=neg[n++];
    
        }
        return nums;
    }
    
};
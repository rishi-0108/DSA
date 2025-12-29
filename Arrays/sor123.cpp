#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*

        brute force 

        int n1=0,n2=0,n0=0;
        for(auto x:nums){
            if(x==0)
            n0++;
            else if(x==1)
            n1++;
            else
            n2++;
        }
        n1+=n0;
        n2+=n1;
        for(int i=0;i<nums.size();i++){
            if(i<n0)
            nums[i]=0;
            if(i>=n0 && i<n1)
            nums[i]=1; 
            if(i>=n1 && i<n2)
            nums[i]=2;
        }
            
        */

        int low=0,mid=0,high=nums.size();
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }  
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
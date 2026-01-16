#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*

        Kadanes algoritm :

        */

        // int maxi=INT_MIN;
        // int sum=0;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
            
        //     if(sum>maxi){
        //         maxi=sum;
        //     }
        //     if(sum<0){
        //         sum=0;
        //     }
        // }
        // return maxi;

        //brute method

        
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum>maxi){
                    maxi=sum;
                }
            }
        }
        return maxi;
        
    }
};
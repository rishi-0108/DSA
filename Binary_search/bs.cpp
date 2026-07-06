#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int search(vector<int>& nums, int target) {
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==target)
    //             return i;
    //     }
    //     return -1;
    // }
    int search(vector<int>& nums , int target){
        int low=0,high=nums.size();
        while(low<high){
            int mid=(low+high)/2;
            if(target<nums[mid]){
                high=mid;
            }
            else if(target>nums.size()){
                low=mid+1;
            }
            else
            return mid;
        }
        return -1;
    }

};

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int left=0,right=0;
        int sum=nums[0];
        int c=0;
        while(right<nums.size()){
                right++;
                sum+=nums[right];
                while(sum>k && left<=right){
                    sum-=nums[left];
                    left++;
                }
                if(sum==k){
                    c++;
                }
        }
        return c;
    }
};
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int latest=0;
        for(int i=0;i<=nums.size();i++){
            if(i==nums.size())
            break;
            if(nums[i]==1){
                latest++;
                if(max<=latest){
                    max=latest;
                }
            }  
            else if(nums[i]==0){
                if(max<=latest){
                    max=latest;
                }
                latest=0;
            }
        }
        return max;
    }
};
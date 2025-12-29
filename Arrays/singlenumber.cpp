#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        /*

        Brute method
        int num;
        for(int i=0;i<nums.size();i++){
            int c=0;
            int n=nums[i];
            for(int j=0;j<nums.size();j++){
                if(nums[j]==n)
                    c++;
            }
            if(c==1){
                num=n;
                break;
            }    
        }
        return num;

        */
        

        // Xor approch 

        int xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};
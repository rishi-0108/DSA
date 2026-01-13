
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k){
       /*
       
       brute force :
       
       int longest=0;
       for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k){
                    longest=max(longest,j-i+1);
                }
            }    
       }
       return longest;
       
       */

       //Optimal : 2 pointer

       int left=0,right=0;
       int sum=nums[0];
       int longest=0;
       while(right<nums.size()){
            right++;
            sum+=nums[right];
            while(sum>k && left<=right){
                sum-=nums[left];
                left++;
            }
            if(sum==k){
                longest=max(longest,right-left+1);
            }
       }
       return longest;
    }
};

int main()
{
    vector<int> a = { 2,3,5 };
    int k = 5;

    // Create an instance of the Solution class
    Solution solution;
    // Function call to get the result
    int len = solution.longestSubarray(a, k);
    
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

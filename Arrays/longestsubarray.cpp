#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
    int longestsubarray(vector<int>& nums,int value){
        int n=nums.size();
        int l=0,r=0,sum;
        int maxsub=0;
        while(r<n){
            sum+=nums[r];
            if(sum==value)
            {
                maxsub=max(maxsub,l-r);
            }
            else if(sum<value){
                r++;
            }
            else if(sum>value){
                sum-=nums[l];
                l++;
            }
        }
        return maxsub;
    }
};
int main()
{
    vector<int> a = { 10, 5, 2, 7, 1, 9 };
    int k = 15;

    // Create an instance of the Solution class
    Solution solution;
    // Function call to get the result
    int len = solution.longestsubarray(a, k);
    
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
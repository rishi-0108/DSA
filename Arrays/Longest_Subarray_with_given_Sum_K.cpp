
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k){
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
    }
};

int main()
{
    vector<int> a = { 10, 5, 2, 7, 1, 9 };
    int k = 15;

    // Create an instance of the Solution class
    Solution solution;
    // Function call to get the result
    int len = solution.longestSubarray(a, k);
    
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

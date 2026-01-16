#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        int start,end;
        for(int i=0;i<nums.size();i++){
            if(sum==0){
                start=i;
            }
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
                end=i;
            }
            if(sum<0){
                sum=0;
            }
        }
        vector<int> res;
        for(int i=start;i<=end;i++){
            res.push_back(nums[i]);
        }
        return res;
    }
};

int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

    // Create an instance of Solution class
    Solution sol;

    // int maxSum = sol.maxSubArray(arr);

    // Print the max subarray sum
    cout << "The maximum subarray sum is: "  << endl;

    vector<int> result=sol.maxSubArray(arr);

    for(auto x : result){
        cout<<x<<" ";
    }

    return 0;
}
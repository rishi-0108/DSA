#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1,suf=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(suf==0)
            suf=1;
            if(pre==0)
            pre=1;

            pre*=nums[i];
            suf*=nums[nums.size()-i-1];

            maxi=max(maxi,max(pre,suf));
        }
        return maxi;
    }
};
int main() {
    // Sample input
    vector<int> nums = {2, 3, -2, 4};

    // Create Solution object
    Solution sol;

    // Print the result
    cout << sol.maxProduct(nums);

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> leader(vector<int>& nums){
        int rightmost=nums[nums.size()-1];
        vector<int> res;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])
            res.push_back(nums[i]);
        }
        res.push_back(rightmost);
        return res;
    }
};
int main() {
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    
    // Create an instance of the Solution class
    solution finder;
    
    // Get leaders using class method
    vector<int> ans = finder.leader(nums);
    
    cout << "Leaders in the array are: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}
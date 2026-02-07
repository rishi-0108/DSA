#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum_brute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n= nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        int sum=nums[i]+nums[j]+nums[k]+nums[l];
                        if(sum==0){
                            ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        }
                    }
                }
            }
        }
        return ans;
    }
};
int main() {
    // Input array
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    // Target sum
    int target = 0;

    // Create object
    Solution obj;
    // Get all quadruplets
    vector<vector<int>> ans = obj.fourSum_brute(arr);

    // Print result
    for (auto quad : ans) {
        for (int num : quad) cout << num << " ";
        cout << endl;
    }
    return 0;
}
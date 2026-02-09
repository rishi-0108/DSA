#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum_brute(vector<int>& nums) {
        set<vector<int>> ans;
        int n= nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        int sum=nums[i]+nums[j]+nums[k]+nums[l];
                        if(sum==0){
                            vector<int> temp={nums[i], nums[j], nums[k], nums[l]};
                            sort(temp.begin(),temp.end());
                            ans.insert(temp);
                        }
                    }
                }
            }
        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
    vector<vector<int>> fourSum_better(vector<int>& nums, int target) {
        set<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<int> st;
                for(int k=j+1;k<n;k++){
                    int req=target-(nums[i]+nums[j]+nums[k]);
                    if(st.find(req) != st.end()){
                        vector<int> temp={nums[i],nums[j],nums[k],req};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                    st.insert(nums[k]);
                }
            }
        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
    vector<vector<int>> fourSum_optimal(vector<int>& nums, int target) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                    int k=j+1;
                    int l=n-1;
                    while(k<l){
                        long long sum = nums[i]+nums[l]+nums[j]+nums[k];
                        if(sum>target)
                        l--;
                        else if(sum<target)
                        k++;
                        else{
                            ans.insert({nums[i],nums[j],nums[k],nums[l]});
                            k++;
                            l--;
                        }
                    }
                }
            }
        return vector<vector<int>>(ans.begin(),ans.end());
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
    vector<vector<int>> ans = obj.fourSum_optimal(arr,target);

    // Print result
    for (auto quad : ans) {
        for (int num : quad) cout << num << " ";
        cout << endl;
    }
    return 0;
}
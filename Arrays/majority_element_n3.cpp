#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto& x:freq){
            if(x.second > (n/3)){
                res.push_back(x.first);
            }
            if(res.size()==2)break;
        }
        return res;
    }
    vector<int> majorityElement_brute(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            
            if(  res.size()==0 || nums[i]!=res[0] ){
                int c=0;

                for(int j=0;j<nums.size();j++){
                    if(nums[i]==nums[j])
                    c++;
                }
            
                if(c>(nums.size()/3))
                    res.push_back(nums[i]);
            }
            if(res.size()==2)break;
        }
        return res;
    }
};
int main() {
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    
    // Create an instance of Solution class
    Solution sol;

    vector<int> ans = sol.majorityElement(arr);
    
    // Print the majority elements found
    cout << "The majority elements are: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}
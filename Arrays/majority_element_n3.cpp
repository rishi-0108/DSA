#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0;
        int e1,e2;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(c1==0 && nums[i]!=e2){
                c1=1;
                e1=nums[i];
            }
            else if(c2==0 && nums[i]!=e1){
                c2=1;
                e2=nums[i];
            }
            else if(e1==nums[i]){
                c1++;
            }
            else if(e2==nums[i]){
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==e1)
            c1++;
            else if(nums[i]==e2)
            c2++;
        }
        int mini=(n/3)+1;
        vector<int> res;
        if(c1>=mini)
        res.push_back(e1);

        if(c2>=mini && e2!=e1)
        res.push_back(e2);
        
        return res;
    }
    vector<int> majorityElement_better(vector<int>& nums) {
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
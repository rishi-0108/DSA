#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=0;i<intervals.size();i++){
            if(ans.empty() || ans.back()[1]<intervals[i][0]){
                // vector<int> interval={intervals[]}
                ans.push_back({intervals[i][0],intervals[i][1]});
            }
            else//ans.back()[1]>intervals[i][0]
            {
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};
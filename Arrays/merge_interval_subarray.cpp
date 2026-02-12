#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution{

    public:

    vector<vector<int>> merge(vector<vector<int>>& intervals){
        if (intervals.empty()) return {};
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=0;i<intervals.size();i++){
            if(ans.empty() || ans.back()[1]<intervals[i][0]){
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
int main() {
    Solution sol;
    vector<vector<int>> intervals = {
        {1, 3}, {2, 6}, {8, 10}, {15, 18}
    };

    vector<vector<int>> result = sol.merge(intervals);

    for (auto v : result) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }

    return 0;
}
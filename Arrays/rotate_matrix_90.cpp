#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> res(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                res[j][n-i-1]=matrix[i][j];
            }
        }      
        return res;          
    }
};
int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution obj;
    vector<vector<int>> rotated = obj.rotate(mat);

    // Print the rotated matrix
    for (auto row : rotated) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }

    return 0;
}
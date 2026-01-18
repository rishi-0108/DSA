#include<iostream>
#include<vector>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> zeroindm,zeroindn;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    zeroindm.push_back(i);
                    zeroindn.push_back(j);
                }
            }
        }
        int zim=0;
        while(zim<zeroindm.size()){
            for(int i=0;i<n;i++){
                matrix[zeroindm[zim]][i]=0;
            }
            zim++;
        }
        int zin=0;
        while(zin<zeroindm.size()){
            for(int i=0;i<m;i++){
                matrix[i][zeroindn[zin]]=0;
            }
            zin++;
        }
    }
};
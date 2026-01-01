#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /*
        
        set<int> s;
        for(auto& x:nums){
            s.insert(x);
        }
        int c=0,le=*s.begin();
        for(auto& x:s){
            if((x-le)==1)
            c++;

            le=x;
            c=0;
        }
        return c;
        
        */

        unordered_set<int> s;
        for(auto& x:nums){
            s.insert(x);
        }
        int longest=1;
        for(auto& x:s){
            if(s.find(x-1)==s.end()){
                int c=1;
                int se=x;
                while(s.find(se+1) != s.end()){
                    se=se+1;
                    c++;
                }
                longest = max(c,longest);
            }
        }
        return longest;
    }
};
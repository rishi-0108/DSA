#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={1,2,2,3};
    vector<int> v2={2,3,4};
    set<int> s1;
    for(int i=0;i<v1.size();i++){
        s1.insert(v1[i]);
    }
    for(int i=0;i<v2.size();i++){
        s1.insert(v2[i]);
    }
    for(auto x : s1){
        cout<<x<<",";
    }
    return 0;
}
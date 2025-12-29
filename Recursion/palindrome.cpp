#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s,int x){
    if(x>s.length()/2)return true;
    if(s[x] != s[s.length()-1-x])return false;
    return isPalindrome(s,x+1);
}

int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s,0);
}
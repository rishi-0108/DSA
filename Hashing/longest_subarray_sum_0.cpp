#include <bits/stdc++.h>
using namespace std;

int solve_brute(vector<int>& a) {
    int largest=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==0)
            {   
                int c=j-i+1;
                largest=max(largest,c);
            }
            
        }
    }
    return largest;
}
int solve(vector<int>& a) {
    unordered_map<int,int> mp;
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<a.size();i++){
        sum+=a[i];

        if(sum==0)
            maxi=max(maxi,i+1);
        else{
            if(mp.find(sum) != mp.end())
                maxi=max(maxi,i-mp[sum]);
            else
                mp[sum]=i;
        }
    }
    return maxi;
}

int main() {
    // sample input
    vector<int> a = {9, -3, 3, -1, 6, -5};
    // print result
    cout << solve(a) << endl;
    // exit
    return 0;
}

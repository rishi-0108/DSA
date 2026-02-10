#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a) {
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

int main() {
    // sample input
    vector<int> a = {6, -2, 2, -8, 1, 7, 4, -10};
    // print result
    cout << solve(a) << endl;
    // exit
    return 0;
}

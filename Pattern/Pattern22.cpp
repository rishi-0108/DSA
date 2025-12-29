#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n*2 -1;i++){
        for(int j=0;j<=n*2 -1;j++){
            int top = i;
            int left = j;
            int right = (n*2) -1-j;
            int bottom = (n*2) -1-i;
            cout<<(n-min(min(top,bottom),min(right,left)));
        }
        cout<<endl;
    }
}
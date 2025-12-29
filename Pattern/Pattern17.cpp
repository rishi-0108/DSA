#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int ch='A';
        for(int k=1;k<=i;k++){
            cout<<(char)ch++;
        }
        // int c='A';
        ch-=2;
        for(int l=1;l<i;l++){
            cout<<(char)ch--;
        }
        cout<<endl;
    }
    return 0;
}
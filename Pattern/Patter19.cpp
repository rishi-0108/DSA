#include<iostream>
using namespace std;
int main(){
    int n=10;
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n/2 - i +1;j++)
        cout<<"*";
        for(int k=1;k<=(i-1)*2;k++)
        cout<<" ";
        for(int j=1;j<=n/2 - i +1;j++)
        cout<<"*";

        cout<<endl;
    }
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=i;j++)
        cout<<"*";
        for(int k=1;k<=((n/2)*2)-(i*2);k++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<"*";

        cout<<endl;
    }
}
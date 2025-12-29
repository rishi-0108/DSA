#include<iostream>
using namespace std;
// int c=0;
void printname(int i,int n){
    if(i>n)
        return;
    cout<<"Rishi\n";
    // c++;
    return printname(i+1,n);
}
void linear(int n,int i){
    if(n<i)
        return;
    cout<<(n)<<endl;
    linear(n-1,i);
}
void backtrack(int i,int n){
    if(i<1)
        return;
    backtrack(i-1,n);
    cout<<i<<endl;
}
void revbacktrack(int i,int n){
    if(i>n)
        return;
    revbacktrack(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;

    // printname(1,n);

    // linear(n,1);

    // backtrack(3,3);

    revbacktrack(1,10);
}
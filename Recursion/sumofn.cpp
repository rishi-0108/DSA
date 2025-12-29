#include<iostream>
using namespace std;

int sumn(int i,int n){
    
    if(i>n){
        return 0;
    }

    return i+sumn(i+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<sumn(1,n);
}
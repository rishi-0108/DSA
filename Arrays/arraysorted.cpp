#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i])
        return false;
    }
    return true;
}
int main(){
    int arr[]={1,3,5,75,85,444,1000};
    int arry[]={4,1,7,3,8,4,3,0};
    cout<<"Array1 sorted = "<<issorted(arry,7);
}
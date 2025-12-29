#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,2,3,3,3,3};
    int i=0;
    for(int j=1;j<9;j++){
        if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}
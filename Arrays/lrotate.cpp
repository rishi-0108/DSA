#include<iostream>
using namespace std;
void lr1(){
    int arr[5]={1,2,3,4,5};
    // int temp;
    int temp=arr[0];
    for(int i=0;i<4;i++){
        arr[i]=arr[(i+1)];
    }
    arr[4]=temp;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<",";
    }
    return ;
}
void lrn(){
    int arr[]={1,2,3,4,5,6,7};
    int n=2;
    int temp[2]={arr[0],arr[1]};
    for(int i=0;i<5;i++){
        arr[i]=arr[(i+n)%7];
    }
    arr[5]=temp[0];
    arr[6]=temp[1];
    for(int i=0;i<7;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    lrn();
    return 0;
}
#include<iostream>
using namespace std;
void nonzero(int arr[],int n){
    // int arr[]={0,1,0,3,12};
    int temp[5]={0};
    int j=0;
    for(int i=0;i<5;i++){
        if(arr[i]!=0)
        temp[j++]=arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<temp[i]<<",";
    }
}
int main(){
    int arr[5]={0};
    for(int i=0;i<5;i++)
    cin>>arr[i];
    nonzero(arr,5);
}
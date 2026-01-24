#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *i,int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    } 
    for(int i=0;i<n;i++)cout<<arr[i]<<",";
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Bubble sort : ";
    bubble_sort(arr,n);  
    return 0;
}
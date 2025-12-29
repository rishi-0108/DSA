#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *i,int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}
void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        // for(int j=0;j<i;j++){
        //     if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        // }
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
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
    cout<<"Insertion sort : ";
    insertion_sort(arr,n);  
    return 0;
}
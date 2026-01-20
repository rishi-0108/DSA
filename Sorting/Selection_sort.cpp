#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *i,int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min])min=j;
        }
        swap(&arr[i],&arr[min]);
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
    cout<<"Selection sort : ";
    selection_sort(arr,n);  
    return 0;
}
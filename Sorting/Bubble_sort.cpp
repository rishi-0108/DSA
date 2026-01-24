#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *i,int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}
void bubble_sort(int arr[],int n){
    
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
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1)
            i++;
        while(arr[j]>pivot && j>=low)
            j--;
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick_sort(vector<int> &arr,int low,int high){
    if(low<high){
        int pindex=partition(arr,low,high);
        quick_sort(arr,low,pindex-1);
        quick_sort(arr,pindex+1,high);
    }
}
int main(){
    vector<int> vec={3,5,1,6,3,7,9,5,0};
    int n=9;
    quick_sort(vec,0,n-1);
    cout<<"Sorted array : {";
    for(int i=0;i<n;i++){
        if(i<n-1)
        cout<<vec[i]<<",";
        else
        cout<<vec[i];
    }
    cout<<"}";
    return 0;
}
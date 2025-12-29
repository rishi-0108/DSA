#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0,x=0;
    map<int ,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second>c){
            c=it.second;
            x=it.first;
        }
    }
    cout<<"The most frequent element is : "<<x<<" With "<<c<<" of occurence .\n";
    return 0;
}
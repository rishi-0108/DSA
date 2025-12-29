#include<iostream>
using namespace std;
int secondlargest(int arr[],int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(largest<arr[i] && slargest>arr[i]){
            slargest=arr[i];
        }
    }
    return slargest;
}
int main(){
    int arr[]={5,3,7,2,3,4,6,9};
    cout<<secondlargest(arr,8);
    return 0;
}
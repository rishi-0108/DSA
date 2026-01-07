#include<bits/stdc++.h>
using namespace std;

// void reverse(int i, int n , int arr[]){
//     if(i>n)return;
//     swap(arr[i],arr[n]);
//     reverse(i+1,n-1,arr);
// }

void reverse(int i, int n , int arr[]){
    if(i>n/2)return;
    swap(arr[i],arr[n-i]);
    reverse(i+1,n,arr);
}


int main(){
    int a[] =  {1,2,3,4,5};
    reverse(0,4,a);
    printarr(a,5);
    return 1;
}

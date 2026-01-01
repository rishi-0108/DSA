#include<bits/stdc++.h>
using namespace std;

// void reverse(int i, int n , int arr[]){
//     if(i>n)return;
//     swap(arr[i],arr[n]);
//     reverse(i+1,n-1,arr);
// }

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    quickSort(arr, 0, n - 1);

    cout << "\nSorted Array:   ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

int main(){
    int a[] =  {1,2,3,4,5};
    reverse(0,4,a);
    printarr(a,5);
    return 1;
}

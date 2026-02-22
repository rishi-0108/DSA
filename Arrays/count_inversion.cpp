
#include <bits/stdc++.h>
using namespace std;

// Function to count the number of inversions in an array
// An inversion is a pair (i, j) such that i < j and arr[i] > arr[j]
int numberOfInversions_brute(vector<int>& a, int n) {
    int cnt = 0; // Initialize inversion count
    // Check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) cnt++; // Increment count if inversion found
        }
    }
    return cnt;
}

//Merge sort 
int merge(vector<int>& a,int low ,int mid , int high){
    int c=0;
    int l=low,r=mid+1;
    vector<int> temp;

    while(l<=mid && r<=high){
        if(a[l]<=a[r]){
            temp.push_back(a[l]);
            l++;
        }
        else{
            temp.push_back(a[r]);
            c+=mid-l+1;
            r++;
        }
        while(l<=mid){
            temp.push_back(a[l]);
            l++;
        }
        while(r<=high){
            temp.push_back(a[r]);
            r++;
        }
    }
    return c;
}
int ms(vector<int>& a,int low ,int high){
    int c=0;

    if(low >= high)
    return c;

    int mid=(high+low)/2;

    c+=ms(a,low,mid);
    c+=ms(a,mid+1,high);
    c+=merge(a,low,mid,high);

    return c;
}
    int numberOfInversions(vector<int>& a, int n) {
    return ms(a,0,n);
}

int main() {
   
}
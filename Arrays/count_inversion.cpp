
#include <bits/stdc++.h>
using namespace std;

// Function to count the number of inversions in an array
// An inversion is a pair (i, j) such that i < j and arr[i] > arr[j]
int numberOfInversions(vector<int>& a, int n) {
    int cnt = 0; // Initialize inversion count
    // Check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) cnt++; // Increment count if inversion found
        }
    }
    return cnt;
}

int main() {
   
}
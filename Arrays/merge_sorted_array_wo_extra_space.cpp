#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    /*
    
    vector<int> merge(vector<int>& a,vector<int>& b){
        int n=a.size();
        int m=b.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]==0){
                swap(a[i],b[j]);
                j++;
                continue;
            }
            if(a[i]<=b[j]){
                i++;
            }
            else{
                swap(a[i],b[j]);
                i++;
            }

        }
        return a;
    }
        
    */
    void merge_initial_algo(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // doesnt work for certain test cases

        int i=0,j=0;
        while(i<m+n && j<n){
            if(nums1[i]==0){
                swap(nums1[i],nums2[j]);
                j++;
                continue;
            }
            if(nums1[i]<=nums2[j]){
                i++;
            }
            else{
                swap(nums1[i],nums2[j]);
                i++;
            }

        }
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                swap(nums1[i],nums1[k]);
                k--;
                i--;
            }
            else{
                swap(nums2[j],nums1[k]);
                k--;
                j--;
            }
        }
        while(j>=0){
            swap(nums1[k],nums2[j]);
            j--;
            k--;
        }
    }
};
int main() {
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    int m = 3, n = 3;

    Solution().merge(nums1,m,nums2,n);

    // Print merged array
    for (int num : nums1) cout << num << " ";
    return 0;
}
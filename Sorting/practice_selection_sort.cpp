#include<iostream>
#include<climits>
#include<vector>
using namespace std;
class Solution{
    public:
    void insertionSort(vector<int>& nums){
        int n=nums.size();
        for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(nums[j]<nums[min])min=j;
        }
        swap(nums[i],nums[min]);
    } 
    }
};
int main() {
    Solution sol;
    vector<int> arr = {7, 3, 5, 2, 9, 1};

    cout << "Original Array:\n";
    for(int x : arr) cout << x << " ";
    cout << "\n";

    sol.insertionSort(arr);

    cout << "Sorted Array:\n";
    for(int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
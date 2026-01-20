#include<iostream>
#include<climits>
#include<vector>
using namespace std;
class Solution{
    public:
    void insertionSort(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            int j=i;
            while(j>0 && nums[j]<nums[j-1]){
                swap(nums[j-1],nums[j]);
                j--;
            }
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

#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int lower_bound(vector<int>& nums , int n, int x){
            int low=0,high=nums.size()-1,ans;
            while(low<=high){
                int mid=(low+high)/2;
                if(x<nums[mid]){
                    ans=mid;
                    high=mid-1;
                }
                else
                low=mid+1;
            }
            return ans;
        }

};
int main() {
    vector<int> arr = {1,2,2,3};  // Sorted input array
    int n = arr.size();                  // Size of array
    int x = 2;                           // Target value

    solution finder;            // Create object of the class
    int ind = finder.lower_bound(arr, n, x);  // Call method to find lower bound

    cout << "The lower bound is the index: " << ind << "\n";  // Output the result
    return 0;
}
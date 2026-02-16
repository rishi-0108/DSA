#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public :

    vector<int> findMissingRepeatingNumbers_brute(vector<int>& nums) {
        vector<int> ans;
        int repeat;
        int missing;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j])
                c++;
            }
            if(c==2){
                repeat=i;
            }
            else if(c==0){
                missing = i;
            }
        }
        ans={repeat,missing};
        return ans;
    }
    vector<int> findMissingRepeatingNumbers(vector<int>& nums) {
        int n=nums.size();
        int hash[n+1]={0};
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        vector<int> ans;

        for(int i=1;i<=n;i++){
            if(hash[i]==2)
            ans.push_back(i);
        }
        for(int i=1;i<=n;i++){
            if(hash[i]==0)
            ans.push_back(i);
        }
        return ans;
    }
};
int main() {
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};
    
    // Create an instance of Solution class
    Solution sol;

    vector<int> result = sol.findMissingRepeatingNumbers(nums);
    
    // Print the repeating and missing numbers found
    cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";
    
    return 0;
}
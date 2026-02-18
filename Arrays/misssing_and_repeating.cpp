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
    vector<int> findMissingRepeatingNumbers_better(vector<int>& nums) {
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
    vector<int> findMissingRepeatingNumbers(vector<int>& nums) {
        long long n=nums.size();
        long long Sn=(n*(n+1))/2;
        long long S2n=(n*(n+1)*((2*n)+1))/6;
        long long S,S2;
        for(int i=0;i<n;i++){
            S=S+nums[i];
            S2=S2+nums[i]*nums[i];
        }
        long long val1=S-Sn;//X-Y
        long long val2=S2-S2n;//x^2-Y^2
        val2=val2/val1;//X+Y
        int repeat=(int)((val1+val2)/2);
        int missing=(int)(repeat-(S-Sn));
        return {repeat,missing};
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
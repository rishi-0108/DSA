#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution{
    public:
    int countSubarraysXOR_brute(vector<int> &a,int b){
        int c=0;
        int n=a.size();
        for(int i=0;i<n;i++){
            int xorval=0;
            for(int j=i;j<n;j++){
                xorval^=a[j];
                if(xorval==b)
                c++;
            }
        }
        return c;
    }
    int countSubarraysXOR(vector<int> &a,int b){
        int xr=0;
        map<int,int> mpp;
        mpp[xr]++;
        int c=0;
        for(int i=0;i<a.size();i++){
            xr=xr^a[i];
            int x=xr^b;
            c+=mpp[x];
            mpp[xr]++;
        }
        return c;
    }
};
int main() {
    // Input array
    vector<int> A = {4, 2, 2, 6, 4};
    // Target xor
    int B = 6;

    Solution sol;
    cout << sol.countSubarraysXOR(A, B) << endl;
    return 0;
}
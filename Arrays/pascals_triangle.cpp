#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
class Solution {
public:
    /*
    Basic factorial thinking method - nearly O(3n)

    long long factorial(int n){
        long long res=1;
        for(int i=1;i<=n;i++){
            res*=i;
        }
        return res;
    }
    long long findpascalelement(int r, int c) {
        r-=1;
        c-=1;
        long long num=factorial(r);
        long long den=factorial(c)*factorial(r-c);
        long long res=num/den;
        return res;

    }*/

    long long findpascalelement(int r,int c){
        int n=r-1;
        int k=c-1;
        long long res=1;
        for(int i=0;i<k;i++){
            res=res*(n-i);
            res=res/(i+1);
        }
        return res;
    }
};
int main() {
    Solution sol;
    int r = 5, c = 3;
    cout << sol.findpascalelement(r, c);
    return 0;
}
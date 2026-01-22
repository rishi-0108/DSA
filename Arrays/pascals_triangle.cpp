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
    vector<vector<int>> generate(int numRows){
        vector<vector<int>> triangle;
        for(int i=0;i<numRows;i++){
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=triangle[i-1][j-1]+triangle[i-1][j];
            }
            triangle.push_back(row);
        }
        return triangle;
    }

};
int main() {
    Solution obj;
    int n = 10;

    // Generate and print Pascal's Triangle
    vector<vector<int>> result = obj.generate(n);
    for (auto &row : result) {
        for (auto &val : row) cout << val << " ";
        cout << endl;
    }
}
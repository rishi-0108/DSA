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
    vector<long long> getNthRow(int n){
        vector<long long> row(n,1);
        long long element=1;
        for(int i=1;i<=n-1;i++){
            element = element * (n-i);
            element = element /i;
            row[i]=element;
        }
        return row;
    }

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
    int N = 15; // Example: 5th row
    Solution sol;
    vector<long long> result = sol.getNthRow(N);

    // Print the row
    for (auto num : result) {
        cout << num << " ";
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minstock=prices[0],maxstock=prices[0];
        int profit=0;
        for(auto& x:prices){
            if(x<minstock){
                minstock=x;
            }
            profit = max(x-minstock,profit);
        }
        return profit;
    }
};
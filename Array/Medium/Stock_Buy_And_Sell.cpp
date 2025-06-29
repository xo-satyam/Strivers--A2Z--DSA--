//PROBLEM STATEMENT-You are given an array prices where prices[i] is the price of a given stock on the ith day.
//PROBLEM-https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
//SOLUTION:-
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int mini=prices[0];
        for(int i=1;i<n;i++){
            int cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,prices[i]);
        }
        return profit;

    }
};

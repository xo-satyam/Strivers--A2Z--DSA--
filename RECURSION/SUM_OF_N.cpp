//PROBLEM STATEMENT-Given an integer n, your task is
//to compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.
//PROBLEM-https://www.geeksforgeeks.org/problems/sum-of-series2811/1
//SOLUTION:-

class Solution {
  public:
    int seriesSum(int n) {
        if(n<=1) return n;
        return n+seriesSum(n-1);
        
    }
};


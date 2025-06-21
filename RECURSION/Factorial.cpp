//PROBLEM STATEMENT-Given a positive integer, n. Find the factorial of n.
//PROBLEM - https://www.geeksforgeeks.org/problems/factorial5739/1
//SOLUTION:-
class Solution {
  public:
    int factorial(int n) {
        if(n==0) return 1;
        return factorial(n-1)*n;   
    }
};

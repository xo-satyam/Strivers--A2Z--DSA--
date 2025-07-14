//PROBLEM STATEMENT - Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
//PROBLEM -https://leetcode.com/problems/sqrtx/description/
//SOLUTION:-
class Solution {
public:
    int mySqrt(int n) {
        int low = 1,high = n;
        while(low<= high){
            int mid = low + (high-low)/2;
            if((1LL*mid*mid) > n){
                high =  mid-1;
            }else{
                low = mid +1;
            }
        }
        return high;
    }
};

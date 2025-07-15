//PROBLEM STATEMENT - Kth Missing Positive Number
//PROBLEM - https://leetcode.com/problems/kth-missing-positive-number/description/
//SOLUTION:-
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0,high = n-1;
        while(low <= high){
            int mid = low +(high-low)/2;
            int missing = arr[mid] - (mid+1);
            if(missing >= k) high = mid-1;
            else low = mid+1;
        }
        return high+k+1;
    }
};

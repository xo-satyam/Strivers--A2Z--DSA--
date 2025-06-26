//PROBLEM STATEMENT-Given an array arr[], check whether it is sorted in non-decreasing order. 
//Return true if it is sorted otherwise false.
//PROBLEM-https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
//SOLUTION:-
class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        if(arr.size()<=1) return true;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<arr[i-1]) return false;
        }
        return true;
    }
};

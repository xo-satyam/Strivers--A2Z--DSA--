//PROBLEM STATEMENT-You are given an array of integers arr[]. Your task is to reverse the given array.
//PROBLEM-https://www.geeksforgeeks.org/problems/reverse-an-array/1
//SOLUTION:-
class Solution {
  public:
  int i=0;
    void reverseArray(vector<int> &arr) {
        if(i>=arr.size()/2) return;
        swap(arr[i],arr[arr.size()-i-1]);
        i++;
        reverseArray(arr);
        
    }
};

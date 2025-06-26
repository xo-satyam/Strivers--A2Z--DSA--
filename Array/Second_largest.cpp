//PROBLEM STATEMENT-Given an array of positive integers arr[], return the second largest
//element from the array. If the second largest element doesn't exist then return -1.
//PROBLEM-https://www.geeksforgeeks.org/problems/second-largest3735/1
//SOLUTION:-
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        set<int>st;
        for(int  i=0;i<arr.size();i++){
            st.insert(arr[i]);
        }
        if(st.size()<=1) return -1;
        set<int> :: iterator it=st.begin();
        int n=st.size();
        advance(it,n-2);
        return *it;
    }
};

//PROBLEM STATEMENT-Given an array arr[]. The task is to find the largest element and return it.
//PROBLEM-https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
//SOLUTON:-
class Solution {
  public:
    int largest(vector<int> &arr) {
        int ans=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>ans){
                ans=arr[i];
            }
        }
        return ans;
    }
    
};

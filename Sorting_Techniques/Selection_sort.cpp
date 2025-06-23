//PROBLEM STATEMET-Given an array arr, use selection sort to sort arr[] in increasing order.
//PROBLEM-https://www.geeksforgeeks.org/problems/selection-sort/1
//SOLUTION:-
class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int mini=i;
            for(int j=i;j<n;j++){
                if(arr[mini]>arr[j]){
                    mini=j;
                }
            }
            int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
        }
        
    }
};

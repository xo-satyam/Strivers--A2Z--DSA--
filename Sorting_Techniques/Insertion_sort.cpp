//PROBLEM STATEMENT-The task is to complete the insertsort() function which is used to implement Insertion Sort.
//PROBLEM-https://www.geeksforgeeks.org/problems/insertion-sort/1
//SOLUTION:-
class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int j=i;
            while(j>0 && arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j--;
            }
        }
    }
};

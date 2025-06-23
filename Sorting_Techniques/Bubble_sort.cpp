//PROBLEM STATEMENT-Given an array, arr[]. Sort the array using bubble sort algorithm.
//PROBLEM-https://www.geeksforgeeks.org/problems/bubble-sort/1
//SOLUTION:-
class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        int n=arr.size();
        int itswap=0;
        for(int i=n-1;i>=1;i--){
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    itswap=1;
                }
            }
            if(itswap==0){
                break;
            }
        }
        
    }
};

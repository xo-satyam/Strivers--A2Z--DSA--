//PROBLEM STATEMENT-Given an integer array nums, return the number of reverse pairs in the array.

//....A reverse pair is a pair (i, j) where:
//....0 <= i < j < nums.length and
//....nums[i] > 2 * nums[j].
//PROBLEM-https://leetcode.com/problems/reverse-pairs/description/
//SOLUTION-
//...APPROACH BY USING MERGE SORT ALGORITHM

class Solution {
public: 
    void merge(vector<int> &arr, int low, int mid, int high) {
        vector<int> temp; 
        int left = low;      
        int right = mid + 1;  
    	while (left <= mid && right <= high) {
            if (arr[left]<= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }
	    while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
    	while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }
	    for (int i= low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }
    int countPairs(vector<int> &a,int low,int mid,int high){
	    int cnt=0;
        int right = mid+1;
	    for(int i=low;i<=mid;i++){
    		while(right<=high && a[i]>a[right]*2LL){
                right++ ;
            }
            cnt += (right-(mid+1));
	    }
        return cnt;
    }
    int mergeSort(vector<int> &arr, int low, int high) {
        int cnt=0;
    	if (low >= high) return cnt;
        int mid = (low + high) / 2 ;
        cnt += mergeSort(arr, low, mid);  
        cnt += mergeSort(arr, mid + 1, high); 
    	cnt += countPairs(arr,low,mid,high);
        merge(arr, low, mid, high);
	    return cnt;  
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums,0,n-1);
    }
};

//PROBLEM STATEMENT-You are given a sorted array 'arr' of distinct values and a target value 'm'. You need to search for the index of the target value in the array.
//PROBLEM-https://www.naukri.com/code360/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813
//SOLUTION:-
int searchInsert(vector<int>& arr, int m)
{
	int n= arr.size();
	int low=0,high=n-1;
	int ans=n;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]>=m){
			ans=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return ans;
}
  

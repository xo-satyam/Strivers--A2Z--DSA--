//PROBLEM STATEMENT-You're given a sorted array 'a' of 'n' integers and an integer 'x'.
//PROBLEM-https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401?leftPanelTabValue=PROBLEM
//SOLUTION:-
int floor(vector<int> &arr, int n, int x){
	int ans=-1;
	int low=0,high=n-1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]<=x){
			ans=arr[mid];
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return ans;
}
int ceil(vector<int>& arr, int m)
{
	int n= arr.size();
	int low=0,high=n-1;
	int ans=-1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]>=m){
			ans=arr[mid];
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return ans;
}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int fl= floor(a,n,x);
	int cl= ceil(a,x);
	return {fl,cl};
}

//PROBLEM STATEMENT-Ninja is given an array ‘Arr’ of size ‘N’. You have to help him find the longest subarray of ‘Arr’, whose sum is 0. You must return the 
//                  length of the longest subarray whose sum is 0.
//PROBLEM-https://www.naukri.com/code360/problems/longest-subarray-with-zero-sum_6783450?leftPanelTabValue=PROBLEM
//SOLUTION:-
#include<bits/stdc++.h>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	int n=arr.size();
	unordered_map<int,int>presum;
	int sum=0;
	int len=0;
	for(int i=0;i<n;i++){
		sum += arr[i];
		if(sum==0){
			len=max(len,i+1);
		}
		
		if(presum.find(sum) !=presum.end()){
			len=max(len,i-presum[sum]);
		}
		if(presum.find(sum) ==presum.end()){
			presum[sum]=i;
		}
	}
	return len;
	
}

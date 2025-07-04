//PROBLEM STATEMENT-Given two non-decreasing sorted arrays, ‘A’ and ‘B’, having ‘N’ and ‘M’ elements, respectively.
//PRPOBLEM -https://www.naukri.com/code360/problems/merge-two-sorted-arrays-without-extra-space_6898839?leftPanelTabValue=PROBLEM

//BY TWO POINTER APPROACH-
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n=a.size(),m=b.size();
	int left=n-1,right=0;
	while(left>=0 && right <m){
		if(a[left]>b[right]){
			swap(a[left],b[right]);
		}
		left--,right++;
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
}

//GAP METHOD APPROACH-
#include<bits/stdc++.h>
using namespace std;
void swapif(vector<long long> &a, vector<long long> &b,int left,int right){
	if(a[left]>b[right]) swap(a[left],b[right]);
}
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n=a.size(),m=b.size();
	int len=m+n;
	int gap = (len/2) +(len%2);
	while(gap>0){
		int left=0;
		int right =left +gap;
		while(right<len){
			if(right >=n && left<n){
				swapif(a,b,left,right-n);
			}
			else if(left>=n){
				swapif(b,b,left-n,right-n);
			}
			else{
				swapif(a,a,left,right);
			}
			right++,left++;
		}
		if(gap==1) break;
		gap = (gap/2) +(gap%2);
	}
}

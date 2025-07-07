//PROBLEM STATEMENT-For a given integer array/list 'ARR' of size 'N' containing all distinct values, find the total 
//                  number of 'Inversions' that may exist.
//....An inversion is defined for a pair of integers in the array/list when the following two conditions are met.
//....A pair ('ARR[i]', 'ARR[j]') is said to be an inversion when:

//....1. 'ARR[i] > 'ARR[j]' 
//....2. 'i' < 'j'
//PROBLEM-https://www.naukri.com/code360/problems/count-inversions_615?leftPanelTabValue=PROBLEM
//SOLUTION:-

//APPROACH BY USING MERGE SORT ALGORITHM 
#include <bits/stdc++.h> 
using namespace std;
long long merge(long long *arr,int low,int high,int mid){
    int left=low;
    int right=mid+1;
    vector<int>temp;
    long long cnt=0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            cnt += (mid-left+1);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    return cnt;
}
long long ms(long long *arr,int low,int high){
    long long cnt=0;
    if(low>=high) return cnt;
    int mid= (high+low)/2;
    
    cnt += ms(arr,low,mid);
    cnt += ms(arr,mid+1,high);
    cnt += merge(arr,low,high,mid);
    return cnt;
}

long long getInversions(long long *arr, int n){
    
    return ms(arr,0,n-1);;
}

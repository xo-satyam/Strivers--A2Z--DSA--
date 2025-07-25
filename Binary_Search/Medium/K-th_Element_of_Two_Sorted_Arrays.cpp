//PROBLEM STATEMENT -  K-th Element of Two Sorted Arrays
//PROBLEM - https://www.naukri.com/code360/problems/k-th-element-of-2-sorted-array_1164159
//SOLUTION:-
#include <bits/stdc++.h>
int kthElement(vector<int> &a, vector<int>& b, int n1, int n2, int k){
    if(n1>n2) return kthElement(b,a,n2,n1,k);
    int low = max(k-n2,0),high = min(n1,k);
    int left = k;
    while(low <= high){
        int mid1 = (high+low) >> 1;
        int mid2 = left - mid1;
        int l1 = INT_MIN,l2 = INT_MIN;
        int r1 = INT_MAX,r2 = INT_MAX; 
        if(mid1 < n1) r1 = a[mid1];
        if(mid2 < n2) r2 = b[mid2];
        if(mid1-1 >= 0) l1 = a[mid1-1];
        if(mid2-1 >= 0) l2 = b[mid2-1];
        if(l1 <= r2 && l2 <= r1){
            return max(l1,l2);
        }
        else if(l1 > r2) high = mid1-1;
        else low = mid1+1;
    }
    return 0;
}

//PROBLEM STATEMENT-  Given an array of integers ‘ARR’ and an integer ‘X’, you are supposed to find the number of subarrays of 
//                    'ARR' which have bitwise XOR of the elements equal to 'X'.


//PROBLEM-https://www.naukri.com/code360/problems/count-subarrays-with-given-xor_1115652?leftPanelTabValue=PROBLEM
//SOLUTION:-
#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    unordered_map<int,int>prexor;
    int xo=0,count=0;
    prexor[xo]++;
    for(int i=0;i<arr.size();i++){
        xo = xo^arr[i];
        int k=xo^x;
        count+=prexor[k];
        prexor[xo]++;
    }
    return count;
}

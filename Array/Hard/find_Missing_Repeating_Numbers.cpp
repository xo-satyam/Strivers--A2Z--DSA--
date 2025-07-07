//PROBLEM STATEMENT-You are given an array of ‘N’ integers where each integer value is between ‘1’ and ‘N’. Each integer appears exactly 
//                  once except for ‘P’, which appears exactly twice, and ‘Q’, which is missing.
//PROBLEM-https://www.naukri.com/code360/problems/missing-and-repeating-numbers_6828164?leftPanelTabValue=PROBLEM
//SOLUTION:-

//APPROACH BY USING BIT OPERATION TECHNIQUE
#include <bits/stdc++.h>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    long long n=a.size();
    int xr=0;
    for(int i=0;i<n;i++){
        xr = xr^a[i];
        xr = xr^(i+1);
    }
    int bitno=0;
    while(1){
        if((xr & (1<<bitno)) !=0){
            break;
        }
        bitno++;
    }
    int zero=0,one=0;

    for(int i=0;i<n;i++){
        if((a[i] & (1<<bitno)) !=0){
            one = one^a[i];
        }else{
            zero = zero^a[i];
        }
    }
    for(int i=1;i<=n;i++){
        if((i & (1<<bitno)) !=0){
            one = one^i;
        }else{
            zero = zero^i;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(zero==a[i]) cnt++;
    }
    if(cnt==2) return {zero,one};
    return {one,zero};
}

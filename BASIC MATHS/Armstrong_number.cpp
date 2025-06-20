//Problem statement
//You are given an integer ‘NUM’ . Your task is to find out whether this number is an Armstrong number or not.
//PROBLEM-https://www.naukri.com/code360/problems/armstrong-number_1462443
//SOLUTION:-
#include <bits/stdc++.h> 
using namespace std;
int order(int x){
    int n=0;
    while(x){
        n++;
        x=x/10;
    }
    return n;
}
bool isArmstrong(int num) {
   
    int n=order(num);
    int dup=num;
    int sum=0;
    while(dup){
        int rem=dup%10;
        sum += pow(rem,n);
        dup /=10;
    }
    if(num==sum)return true;
    return false;
}

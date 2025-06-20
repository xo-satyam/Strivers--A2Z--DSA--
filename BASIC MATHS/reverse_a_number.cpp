//PROBLEM STATEMENT-Given a signed 32-bit integer x, return x with its digits reversed. 
//If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//PROBLEM-https://leetcode.com/problems/reverse-integer/
//SOLUTION:-
#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {
  long long int rev=0;
  while(x !=0){
    int rem=x%10;
    if(rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
    rev =rem +rev*10;
    x /=10;
  }
  return rev;
}

//PROBLEM STATEMENT-Find the number of digits of ‘n’ that evenly divide ‘n’.
//PROBLEM-https://www.naukri.com/code360/problems/count-digits_8416387?leftPanelTabValue=PROBLEM
//SOLUTION:-
#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
	// Write your code here.	
	int count =0;
	int c=n;
	
	while(c>0){
		if(c%10==0){
			c/=10;
			continue;
		} 
		int ld=c%10;
		
		if(n%ld==0){
			count++;
		}
		c/=10;
	}
	return count;
}

//VARIATION ONE:-
//PROBLEM STATEMENT-You are given an array 'A' of size 'N' and an integer'K'’.You need to generate
//                  and return all subarrays of array ‘A’ whose sum = ‘K’.
//PROBLEM-https://www.naukri.com/code360/problems/subarrays-with-sum-%E2%80%98k'_6922076?leftPanelTabValue=PROBLEM
//SOLUTION:-
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subarraysWithSumK(vector<int> a, long long k) {
    vector<vector<int>>ans;
    long long sum=0;
    map<long  long,int>presum;
    
    for(int i=0;i<a.size();i++){
       sum += a[i];
       if(sum==k){
           vector<int>temp;
           
           for(int j=0;j<=i;j++){
               temp.push_back(a[j]);
           }
           ans.push_back(temp);
       }
       if(presum.find(sum-k)!=presum.end()){
           vector<int>temp;
           
           for(int j=presum[sum-k]+1;j<=i;j++){
               temp.push_back(a[j]);
           }
           ans.push_back(temp);
       }
       presum[sum]=i;
    }
    
    return ans;
}

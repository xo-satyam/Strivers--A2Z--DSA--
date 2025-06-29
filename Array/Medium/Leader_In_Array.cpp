//PROBLEM STATEMENT- Given a sequence of numbers. Find all leaders in sequence. An element is a leader if 
//                     it is strictly greater than all the elements on its right side.
//PROBLEM-https://www.naukri.com/code360/problems/leaders-in-an-array_873144
//SOLUTION:-
#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &nums, int a) {
    vector<int>ans;
    int n= nums.size();
    int maxi= INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
        }
        maxi = max(maxi,nums[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

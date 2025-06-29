//PROBLEM STATEMENT- You are given an unsorted array/list 'ARR' of 'N' integers. Your task is to 
//                   return the length of the longest consecutive sequence.
//PROBLEM-https://www.naukri.com/code360/problems/longest-consecutive-sequence_759408?leftPanelTabValue=PROBLEM
//SOLUTION:-
//BETTER APPROACH ;
#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    if(arr.size()==0) return 0;
    sort(arr.begin(),arr.end());
    int longest=1,count=0,last_smaller=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]-1 == last_smaller){
            count += 1;
            last_smaller=arr[i];
        }
        else if(arr[i] != last_smaller){
            count=1;
            last_smaller = arr[i];
        }
        longest = max(longest,count);
    }
    return longest;
}

//OPTIMAL CODE:-
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    if(arr.size()==0) return 0;
    int longest=1,count=0;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            count=1;
            int x=it;
            while(st.find(x+1) != st.end()){
                x=x+1;
                count = count+1;
            }
        }
        longest = max(longest,count);
    }
    return longest;
}

//PROBLEM STATEMENT- Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,
//                   and return an array of the non-overlapping intervals that cover all the intervals in the input.

//PROBLEM-https://leetcode.com/problems/merge-intervals/
//SOLUTION:-

//.... BRUTE APPROACH
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        vector<vector<int>> ans;
        sort(interval.begin(),interval.end());
        int n = interval.size();
        for(int i = 0 ; i < n ; i++ ){
            int start = interval[i][0];
            int end = interval[i][1];
            if(!ans.empty() && end <= ans.back()[1]){
                continue;
            }
            for(int j =i+1;j<n;j++){
                if(interval[j][0] <= end){
                    end=max(end,interval[j][1]);
                }else{
                    break;
                }
            }
            ans.push_back({start,end});
        }
        return ans;
    }
};

//OPTIMAL APPROACH-
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        vector<vector<int>> ans;
        sort(interval.begin(),interval.end());
        int n = interval.size();
        for(int i = 0 ; i < n ; i++ ){
            if(ans.empty() || ans.back()[1] < interval[i][0]){
                ans.push_back(interval[i]);
            }else{
                ans.back()[1] = max(ans.back()[1],interval[i][1]);
            }
        }
        return ans;
    }
};

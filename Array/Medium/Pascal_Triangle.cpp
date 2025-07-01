//PROBLEM STATEMENT-Given an integer numRows, return the first numRows of Pascal's triangle.
//PROBLEM-https://leetcode.com/problems/pascals-triangle/description/
//SOLUTION:-
class Solution {
public:
    vector<int> row(int numRows) {
        long long ans=1;
        vector<int>ansrow;
        ansrow.push_back(1);
        for(int col=1;col<numRows;col++){
            ans *= (numRows-col);
            ans /=  col;
            ansrow.push_back(ans);
        }
        return ansrow;
        
    }
    vector<vector<int>> generate(int numRows){
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(row(i));
        }
        return ans;
    }
};

//PROBLEM STATEMENT - Search in a row and column wise sorted matrix
//PROBLEM - https://leetcode.com/problems/search-a-2d-matrix-ii/description/
//SOLUION:-
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size() , m = matrix[0].size();
        int row = 0;
        int col = m-1;
        int low = 0,high = (m*n)-1;
        while(row < n && col >= 0){
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) col--;
            else row++;
        }
        return false;
    }
};

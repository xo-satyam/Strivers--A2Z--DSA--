//PROBLEM STATEMENT-You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
//PROBLEM-https://leetcode.com/problems/rotate-image/
//SOLUTION:-
class Solution {
public:
    void reversemat(vector<int>& matrix){
        int start = 0;
        int end = matrix.size() - 1;
        while (start < end) {
            int temp = matrix[start];
            matrix[start] = matrix[end];
            matrix[end] = temp;
            start++;
            end--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix[0].size(),n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i<=j){
                    swap(matrix[i][j],matrix[j][i]);
                }
                
            }
        }
        for(int i=0;i<n;i++){
            reversemat(matrix[i]);
        }
    }
};

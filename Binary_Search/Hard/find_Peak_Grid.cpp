//PROBLEM STATEMENT - A peak element in a 2D grid is an element that is strictly greater than all of its adjacent 
//                    neighbors to the left, right, top, and bottom.
//PROBLEM - https://leetcode.com/problems/find-a-peak-element-ii/
//SOLUTION:-
class Solution {
public:
    int maxelement(vector<vector<int>> &mat,int n,int m,int col){
        int index = -1,maxval = -1;
        for(int i=0; i<n ;i++){
            if(mat[i][col]>maxval){
                maxval = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(),m = mat[0].size();
        int low = 0,high = m-1;
        while(low <= high){
            int mid = low +(high-low)/2;
            int row = maxelement(mat,n,m,mid);
            int left = mid-1>=0 ? mat[row][mid-1] : -1;
            int right = mid+1<m ? mat[row][mid+1] : -1;
            if(mat[row][mid] > left && right < mat[row][mid]){
                return {row,mid};
            }
            else if(left > mat[row][mid]) high = mid-1;
            else low = mid+1;
        } 
        return {-1,-1};
    }
};

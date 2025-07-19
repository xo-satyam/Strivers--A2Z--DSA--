//PROBLEM STATEMENT - Search In A 2D Matrix
//PROBLEM - https://www.naukri.com/code360/problems/search-in-a-2d-matrix_980531
//SOLUTION:-
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int low = 0;
        int n = mat.size(),m = mat[0].size();
        int high = (n*m)-1;
        while(low <= high){
            int mid = low +(high-low)/2;
            int row = mid/m;
            int col = mid%m;
            if(mat[row][col]==target) return true;
            else if(mat[row][col] > target) high = mid-1;
            else low = mid+1;
        }
        return false;
}

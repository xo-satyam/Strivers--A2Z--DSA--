//PROBLEM STATEMENT - Find the row with maximum number of 1's
//PROBLEM - http://naukri.com/code360/problems/row-with-maximum-1-s_1112656
//SOLUTION:-
int lowerbound(vector<int>row , int n,int x){
    int low=0,high=n-1;
    while(low <= high){
        int mid = low +(high- low)/2;
        if(row[mid]>= x){
            high = mid-1;
        }else low = mid+1;
    }
    return low;
}
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int maxcnt = 0,index = -1;
    for(int i=0;i<n;i++){
        int cnt  = m - lowerbound(matrix[i],m,1);
        if(cnt > maxcnt){
            maxcnt = cnt;
            index = i;
        }
    }
    return index;
}

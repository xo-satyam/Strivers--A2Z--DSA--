//PROBLEM STATEMENT - Book Allocation Problem
//PROBLEM - https://www.naukri.com/code360/problems/allocate-books_1090540?leftPanelTabValue=PROBLEM
//SOLUTION:-
int countStudents(vector<int>arr, int max_pages_allowed){
    int student = 1;
    long long pages_Allocated = 0;
    for(int i =0;i<arr.size() ;i++){
        if((pages_Allocated + arr[i]) <= max_pages_allowed){
            pages_Allocated += arr[i];
        }
        else{
            student++;
            pages_Allocated = arr[i];
        }
    }
    return student;
}
int findPages(vector<int>& arr, int n, int m) {
    if (m > n) return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while (low <= high) {
        int mid = (low + high) / 2;
        int students = countStudents(arr, mid);
        if (students > m) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
}

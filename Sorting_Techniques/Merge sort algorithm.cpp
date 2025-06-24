//SOLUTION:-
// function to merge two sorted subarrays into one sorted array
void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp; // temporary array to store merged result
    int left = low;   // start index of left subarray
    int right = mid + 1; // start index of right subarray

    // merge the two subarrays into temp[]
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // copy remaining elements of left subarray, if any
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // copy remaining elements of right subarray, if any
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // copy the sorted elements back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// recursive function to divide the array and sort
void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return; // base case: we know one element is always sorted

    int mid = low + (high - low) / 2;

    // recursively sort first and second halves
    mergeSort(arr, low, mid);      // Left half
    mergeSort(arr, mid + 1, high); // Right half

    // merge the sorted halves
    merge(arr, low, mid, high);
}
void mergeSort(vector < int > & arr, int n) {
    ms(arr,0,n-1);
}

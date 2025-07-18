//PROBLEM STATEMENT - Painter's Partition Problem
//PROBLEM - https://www.naukri.com/code360/problems/painter's-partition-problem_1089557
//SOLUTION:-
int checksum(vector<int>& nums, int max_allowed){
    int count = 1,max_possible=0;
    for(int i=0;i<nums.size();i++){
        if(max_possible + nums[i] <= max_allowed){
            max_possible += nums[i];
        }else{
            max_possible = nums[i];
            count++;
        }
    }return count;
}

int findLargestMinDistance(vector<int> &nums, int k){
    int low = *max_element(nums.begin(),nums.end());
    int  high = accumulate(nums.begin(),nums.end(),0);
    while(low <= high){
        int mid = low +(high-low)/2;
        int count_painter = checksum(nums,mid);
        if(count_painter > k){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return low;
}

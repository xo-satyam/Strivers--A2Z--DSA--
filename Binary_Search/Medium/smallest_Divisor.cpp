//PROBLEM STATEMENT - Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, 
//  divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above
//  is less than or equal to threshold.
//PROBLEM - https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
//SOLUTION:-
class Solution {
public:
    int Total(vector<int>nums,int divisor){
        int n = nums.size();
        int sum = 0;
        for(int i=0 ; i<n ;i++){
            sum += ceil((double)nums[i]/(double)divisor);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size(),ans = -1;
        if(threshold < n) return -1;
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            int mid = low +(high-low)/2;
            int sum = Total(nums,mid);
            if(sum <= threshold){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};

//PROBLEM STATEMENT-Rotate Array ,Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
//PROBLEM-https://leetcode.com/problems/rotate-array/description/
//SOLUTION:-
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k= k%n;
        vector<int>temp;
        for(int i=0;i<n-k;i++){
            temp.push_back(nums[i]);
        }
        for(int i=n-k;i<n;i++){
            nums[i-n+k]=nums[i];
        }
        for(int i=k;i<n;i++){
            nums[i]=temp[i-(k)];
        }
    }
};

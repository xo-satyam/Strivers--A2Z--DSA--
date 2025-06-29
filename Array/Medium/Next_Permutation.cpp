//PROBLEM STATEMENT-A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
//PROBLEM-https://leetcode.com/problems/next-permutation/description/
//SOLUTION:-
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1,n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>idx;i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        
        reverse(nums.begin()+idx+1,nums.end());
        
    }
};

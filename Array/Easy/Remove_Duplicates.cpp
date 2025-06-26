//PROBLEM STATEMET-Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each 
//unique element appears only once.The relative order of the elements should be kept the same. Then return 
//the number of unique elements in nums.
//PROBLEM-https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
//SOLUTION:-
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i-1);
            }
        }
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i-1);
            }
        }
        
        return nums.size();
    }
};

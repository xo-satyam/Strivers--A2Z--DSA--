//PROBLEM STATEMENT- Given an integer array nums, move all 0's to the end of it while maintaining
//                   the relative order of the non-zero elements.

//PROBLEM-https://leetcode.com/problems/move-zeroes/description/
//SOLUTION:-
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }else{
                count++;
            }
        }
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
        for(int i=temp.size();i<nums.size();i++){
            nums[i]=0;
        }
    }
};

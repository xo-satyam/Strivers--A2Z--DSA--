//PROBLEM STATEMENT- The majority element is the element that appears more than ⌊n / 2⌋ times. 
//                   You may assume that the majority element always exists in the array.
//PROBLEM- https://leetcode.com/problems/majority-element/description/
//SOLUTION:-
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0],count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                ans=nums[i];
            }
            if(ans==nums[i]) count++;
            else count--;
        }
        return ans;
    }
};

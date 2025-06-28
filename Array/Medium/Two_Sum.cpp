//PROBLEM STATEMENT-Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target
//PROBLEM-https://leetcode.com/problems/two-sum/description/
//SOLUTION:-
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>ans;
        unordered_map<int,int>ummp;
        for(int i=0;i<nums.size();i++){
            ummp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(ummp.find(target-nums[i])!=ummp.end() && i !=ummp[target-nums[i]]){
                ans.push_back(i);
                ans.push_back(ummp[target-nums[i]]);
                break;
            }
        }
        return ans;

    }
};

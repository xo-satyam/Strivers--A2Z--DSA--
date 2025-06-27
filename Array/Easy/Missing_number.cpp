//PROBLEM STATEMENT- Given an array nums containing n distinct numbers in the range [0, n], 
//                   return the only number in the range that is missing from the array.
//PROBLEM-https://leetcode.com/problems/missing-number/description/
//SOLUTION:-
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        if(nums[0]==1)return 0;
        int j=0;
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i]+1!=nums[i+1]) return nums[i]+1;
            j++;
        }
        if(j==nums.size()-1) return nums[j]+1;
        return 0;
    }
};

//OPTIMAL SOLUTION:-
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR1=0;
        int maxel = max_element(nums.begin(),nums.end());
        for(int i=0;i<=maxel;i++){
            XOR1 =XOR1^i;
        }
        int XOR=0;
        for(int i=0;i<nums.size();i++){
            XOR=XOR^nums[i];
        }
        return XOR1^XOR;
    }
};


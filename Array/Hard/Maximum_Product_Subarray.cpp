//PROBLEM STATEMENT-Given an integer array nums, find a subarray that has the largest product, and return the product.
//PROBLEM-https://leetcode.com/problems/maximum-product-subarray/
//SOLUTION:-
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre = 1,suff = 1;
        int n = nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(pre==0)pre=1;
            if(suff==0) suff=1;
            pre = pre*nums[i];
            suff = suff*nums[n-i-1];
            ans=max(ans,max(pre,suff));
        }
        return ans;
    }
};

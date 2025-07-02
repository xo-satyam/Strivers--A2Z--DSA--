//PROBLEM STATEMENT-Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and
//                   j != k, and nums[i] + nums[j] + nums[k] == 0.
//PROBLEM-https://leetcode.com/problems/3sum/description/
//SOLUTION:-
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int>>ans;
        sort(num.begin(),num.end());
        int n=num.size();
        for(int i=0;i<n;i++){
            if(i>0 &&  num[i]==num[i-1]) continue;
            int j=i+1,k=n-1;
            while(j<k){
                int sum=num[i]+num[j]+num[k];
                if(sum>0){
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    vector<int>temp={num[i],num[j],num[k]};
                    ans.push_back(temp);
                    j++;
                    
                    while(j<k && num[j]==num[j-1])j++;
                    while(j<k && num[k]==num[k-1])k--;
                }
            }
        }
        return ans;
    }
};

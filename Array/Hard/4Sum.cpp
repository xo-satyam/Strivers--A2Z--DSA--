//PROBLEM STATEMENT-Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] 
//....  such that:
//....  0 <= a, b, c, d < n
//....  a, b, c, and d are distinct.
//....  nums[a] + nums[b] + nums[c] + nums[d] == target
//PROBLEM-https://leetcode.com/problems/4sum/description/
//SOLUTION:-
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
        sort(num.begin(),num.end());
        vector<vector<int>>ans;
        int n= num.size();
        for(int i=0;i<n;i++){
            if(i>0 && num[i]==num[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && num[j]==num[j-1])continue;
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=num[i]+num[j];
                    sum +=num[k];
                    sum += num[l];
                    if(sum==target){
                        vector<int>temp={num[i],num[j],num[k],num[l]};
                        ans.push_back(temp);
                        k++;l--;
                        while(k<l && num[k]==num[k-1]) k++;
                        while(k<l && num[l]==num[l+1]) l--;
                    }else if(sum>target)l--;
                    else k++;
                }
            }
        }
        return ans;
    }
};

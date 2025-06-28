//PROBLEM STAEMENT-Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
//PROBLEM-https://leetcode.com/problems/subarray-sum-equals-k/
//SOLUTION:-
class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int sum=0;
        map<int,int>presum;
        
        int Subcount=0;
        for(int i=0;i<a.size();i++){
            sum += a[i];
            if(sum==k){
                Subcount++;
            }
            if(presum.find(sum-k)!=presum.end()){
                
                Subcount +=presum[sum-k];
            }
            presum[sum]++;
        }
        return Subcount;
    }
};

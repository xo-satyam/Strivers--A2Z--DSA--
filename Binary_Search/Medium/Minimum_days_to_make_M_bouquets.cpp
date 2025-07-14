//PROBLEM STATEMENT - You are given an integer array bloomDay, an integer m and an integer k.Return the minimum number of days you need 
// to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.
//PROBLEM - https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
//SOLUTION:-
class Solution {
public:
    int countFlower(vector<int>& bloomDay,int days,int totalFlower,int m,int k){
        int n = bloomDay.size();
        int count = 0,bouquet = 0;
        for(int i = 0; i<n ; i++){
            if(bloomDay[i] <= days){
                count++;
                if(count == k){
                    bouquet++;
                    count = 0;
                }
            }else count = 0;
        }
        if(bouquet >= m) return 1;
        return 0;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlower = 1LL*m*k;
        if(totalFlower > bloomDay.size()) return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int ans = INT_MAX;
        while(low <= high){
            int mid = low +(high-low)/2;
            int flower = countFlower(bloomDay,mid,totalFlower,m,k);
            if(flower == 1){
                ans= min(mid,ans);
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};

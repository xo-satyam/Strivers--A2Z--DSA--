//PROBLEM STATEMENT - Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The 
//guards have gone and will come back in h hours.Return the minimum integer k such that she can eat all the bananas within h hours.
//PROBLEM - https://leetcode.com/problems/koko-eating-bananas/description/
//SOLUTION:-
class Solution {
public:
  int minEatingSpeed(vector<int>& v, int h) {
        int low = 1;
        int high = *max_element(v.begin(), v.end());
        while(low <= high){
            int mid = low +(high-low)/2;
            long long total = 0; 
            for(int p : v ){
                total += ceil((double)p/(double)mid);
            }
            if(total <= h) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};

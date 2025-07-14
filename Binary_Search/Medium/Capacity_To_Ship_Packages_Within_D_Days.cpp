//PROBLEM STATEMENT-Capacity To Ship Packages Within D Days
//PROBLEM -https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
//SOLUTION:-

class Solution {
public:
    int Sumation(vector<int>& weights, int n){
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += weights[i];
        }
        return sum;
    }
    int Days_required(vector<int>& weights,int capacity){
        int days = 1,load = 0;
        for(int i=0; i<weights.size(); i++){
            if(load+weights[i] > capacity){
                load = weights[i];
                days++;
            }else{
                load += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(),weights.end());
        long long high = Sumation(weights,n); 
        while(low <= high){
            int mid = low +(high-low)/2;
            int required = Days_required(weights,mid);
            if(required <= days) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};

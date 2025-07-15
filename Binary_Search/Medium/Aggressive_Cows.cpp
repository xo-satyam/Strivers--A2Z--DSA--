//PROBLEM STATEMENT - Aggressive Cows
//PROBLEM - https://www.naukri.com/code360/problems/aggressive-cows_1082559?leftPanelTabValue=PROBLEM
//SOLUTION:-
bool weCanPlace(vector<int>arr,int cows,int distance){
    int cntCow = 1 ,last = arr[0];
    for(int i=1; i<arr.size();i++){
        if((arr[i]-last) >= distance){
            cntCow++;
            last = arr[i];
        }
        if(cntCow == cows) return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(),stalls.end());
    int  n = stalls.size();
    int low = 1,high = stalls[n-1]-stalls[0];
    while(low <= high){
        int mid = low +(high-low)/2;
        if(weCanPlace(stalls,k,mid)){
            low = mid+1;
        }
        else high = mid-1;
    }
    return high;
}

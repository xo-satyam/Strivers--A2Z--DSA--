//PROBLEM STATEMENT-Given an integer n, return the number of prime numbers that are strictly less than n.
//PROBLEM-https://leetcode.com/problems/count-primes/description/
//SOLUTION:-
class Solution {
public:
    int countPrimes(int n){
        int ans=0;
        vector<int>v(n+1,1);
        for(long long i=2;i<=sqrt(n);i++){
            if(v[i]){
                for(int j=i*i;j<n;j+=i){
                    v[j]=0;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(v[i]) ans++;
        }
        return ans;
    
    }
};

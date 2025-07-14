//PROBLEM STATEMENT - Find the Nth root of a number using binary search
//PROBLEM - https://www.naukri.com/code360/problems/nth-root-of-m_1062679
//SOLUTION:-
int pow(int n,int m,int mid){
  long long ans = 1;
  for(int i=1;i<=n;i++){
    ans = ans*mid;
    if(ans>m) return 2;
  }
  if(ans==m) return 1;
  return 0;
}
int NthRoot(int n, int m) {
  int low = 1,high = m;
  while(low <= high){
    int mid = low + (high-low)/2;
    int midN = pow(n,m,mid);
    if(midN==1) return mid;
    else if(midN==0) low = mid+1;
    else high = mid-1;
  }
  return -1;
}

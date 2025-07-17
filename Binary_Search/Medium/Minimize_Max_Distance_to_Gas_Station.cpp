//PROBLEM STATEMENT-Minimize Max Distance to Gas Station
//PROBLEM - https://www.naukri.com/code360/problems/minimise-max-distance_7541449
//SOLUTION:-
int NumberOfGasStation(long double dist,vector<int> &arr){
	int cnt = 0;
	for(int i =1;i<arr.size();i++){
		long double NumberInBetween = ((arr[i]-arr[i-1])/dist);
		if(((arr[i]-arr[i-1])/dist) == (NumberInBetween*dist)){
			NumberInBetween--;
		}
		cnt += NumberInBetween;
	}
	return cnt;
}
double minimiseMaxDistance(vector<int> &arr, int k){
	long double low = 0,high = 0;
	int n = arr.size();
	for(int i=0;i<n-1;i++){
		high = max(high,(long double)(arr[i+1]-arr[i]));
	}
	long  double diff = 1e-6;
	while(high-low > diff){
		long double mid = low +(high-low)/2;
		int cnt = NumberOfGasStation(mid,arr);
		if(cnt>k){
			low = mid;
		}else{
			high = mid;
		}
	}
	return high;
}

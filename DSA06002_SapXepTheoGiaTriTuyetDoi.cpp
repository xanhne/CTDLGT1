// 2
// 5 7
// 10 5 3 9 2
// 5 6
// 1 2 3 4 5
 

// 5 9 10 3 2
// 5 4 3 2 1

#include<bits/stdc++.h>
using namespace std;

long long countRotations(long long arr[], long long n){	
	int low =0 , high = n-1;
	while(low<=high){
		int mid = low + (high-low)/2 ;
		int prev = (mid-1 + n) %n , next = (mid+1)%n;
		if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
			return mid;
		else if (arr[mid]<=arr[high])
			high = mid-1 ;
		else if (arr[mid]>=arr[low])
			low=mid+1;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n; cin >> n;
		long long arr[n];
		for(auto &i:arr) cin >> i;
		cout << countRotations(arr,n-1)<< endl;
	}
}


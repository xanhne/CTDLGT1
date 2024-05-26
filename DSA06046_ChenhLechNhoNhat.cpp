// 3

// 6

// 1 5 3 19 18 25

// 4

// 30 5 20 9

// 7

// 1 19 2 31 38 25 100

// 1

// 4

// 1

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n,k; 
		cin >> n;
		long long a[n];
		for(auto &i:a){
			cin >> i;
		}
		stable_sort(a,a+n);
		long long Min = INT_MAX;
		for(int i = 1; i < n;i++){
			Min = min(Min,a[i] - a[i-1]);
		}
		cout  << Min << endl;
	}
}



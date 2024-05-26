// 2
// 10
// 5 6 7 8 9 10 1 2 3 4
// 5
// 1 1 1  1  1

// 1 2

// -1

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >> t;
	while(t--){
		long long n; cin >> n;
		long long a[n];
		long long min2 = INT_MAX;
		for(auto &i:a){
			cin >> i; 
		}
		sort(a,a+n);
		for(int i = 1; i < n; i++){
			if(a[i]!=a[0]){
				min2 = a[i]; break;
			}
		}
		if(min2 == INT_MAX) cout << -1;
		else cout << a[0] << " "<<min2;
		cout << endl;
	}
}


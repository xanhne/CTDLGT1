// 2
// 6 6
// 5 7 9 3 6 2
// 1 2 6 -1 0 9
// 6 6

// 1 4 2 3 10 2
// 4 2 6 5 2 9

// -9
// 20

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n,m; 
		cin >> n >> m;
		long a[n],b[m];
		for(auto &i:a) cin >> i;
		for(auto &i:b) cin >> i;
		sort(a,a+n);
		sort(b,b+m);
		cout << 1LL * a[n-1] * b[0] << endl; 
	}
}


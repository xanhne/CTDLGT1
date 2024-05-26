// 2
// 5 3

// 10 7 9 12 6

// 6 2

// 9 7 12 8 6 5

 

// 12 10 9

// 12 9

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		for(auto &i:a) cin >> i;
		sort(a,a+n);
		for(int i = n-1; i >= 0; i--){
			if(k == 0) break;
			cout << a[i] << " ";
			k--;
		}
		cout << endl;
	}
}


// 2
// 10 3
// 5 6 7 8 9 10 1 2 3 4
// 10 3
// 1 2 3 4 5 6 7 8 9 10

// 9

// 3

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >> t;
	while(t--){
		long n,x; cin >> n >> x;
		int ok = 0, vt;
		long a[n+1];
		for(int i = 1; i <= n;i++){
			cin >> a[i];
			if(ok == 0 && a[i] == x){
				vt = i;ok = 1;
			}
		}
		cout << vt << endl;
	}
}


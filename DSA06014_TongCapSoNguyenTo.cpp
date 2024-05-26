// 2
// 4

// 8

// 2 2

// 2 5

#include<bits/stdc++.h>
using namespace std;

bool nto(int n){
	if(n < 2) return false;
	if(n > 2){
		if(n%2==0) return false;
	}
	if(n == 2) return true;
	for(int i = 3; i <= sqrt(n);i+=2){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ok = 0;
		for(int i = 2; i <= n/2; i++){
			if(nto(i)&&nto(n-i)){
				cout << i << " "<<n-i;
				ok = 1;
				break;
			}
		}
		if(ok == 0) cout << -1;
		cout << endl;
	}
}

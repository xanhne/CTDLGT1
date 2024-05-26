// 4

// 5 3 2 7

// Buoc 1: 3 2 5 7

// Buoc 2: 2 3 5 7

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;  t = 1;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(auto &i:a) cin >> i;
		for(int i = 0; i < n-1;i++){
			int x = 0;
			for(int j = 0; j < n-i-1; j++){
				if(a[j] > a[j+1]){
					swap(a[j],a[j+1]);
					x = 1;
				}
			}
			vector<int>v(a,a+n);
			if(x == 0) break;
			else{
				cout << "Buoc "<<i+1<<": ";
				for(int x:v) cout << x <<" ";
				cout << endl;
			}
		}
	}
}


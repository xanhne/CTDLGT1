// 1

// 3 3

// 10 5 15

// 20 3 2

// 2 3 5 10 15 20

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n,m;
		cin >> n >> m;
		long long a[n],b[m],c[n+m];
		long long l1  = 0;
		for(auto &i:a){
			cin >> i; c[l1++] = i;
		}
		for(auto &i:b){
			cin >> i;
			c[l1++] = i;
		}
		sort(c,c+l1);
		for(int x:c) cout << x <<" ";
	
		cout << endl;
	} 
}

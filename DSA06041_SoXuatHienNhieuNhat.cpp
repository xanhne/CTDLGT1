// 2

// 9

// 3 3 4 2 4 4 2 4 4

// 8

// 3 3 4 2 4 4 2 4

// 4

// NO

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >>n;
		int a[n];
		map<int,int>mp;
		int k, g = INT_MIN;
		for(auto &i:a){
			cin >> i;mp[i]++;
			if(mp[i] > g){
				g = mp[i]; k = i;
			}
		}
		if(g > n/2) cout << k;
		else cout << "NO";
		cout << endl;
	}
}



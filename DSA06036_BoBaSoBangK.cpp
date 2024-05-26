// 2

// 6 22

// 1 4 15 6 10 8

// 3 4

// 1 1 1

 

// YES

// NO

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long k;
		int n; cin >> n >> k;
		long long a[n];
		for(auto &i:a) cin >> i;
		int ok = 0;
		for(int i = 0; i < n-1;i++){
			unordered_set<long>s;
			for(int j= i+1; j < n; j++){
				long long x = k -(a[i]+a[j]);
				if(s.find(x)!=s.end()){
					ok = 1;
					break;
				}else{
					s.insert(a[j]);
				}
			}
			if(ok) break;
		}
		if(ok) cout <<"YES";
		else cout <<"NO";
		cout << endl;
	}
}


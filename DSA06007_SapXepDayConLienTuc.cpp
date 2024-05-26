// 2
// 11
// 10 12 20 30 25 40 32 31 35 50 60
// 9
// 0 1 15 25 6 7 30 40 50

// 4 9
// 3 6

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		vector<long long>v;
		for(auto &i:a){
			cin >> i;
			v.push_back(i);
		}
		sort(v.begin(),v.end());
		int x = 0, y = n - 1;
		while(a[x] == v[x]) x++;
		while(a[y] == v[y]) y--;
		cout << x+1 <<" "<<y+1 << endl;
	}
}


// 2
// 5
// 5 5 4 6 4
// 5
// 9 9 9 2 5

// 4 4 5 5 6
// 9 9 9 2 5

#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;

bool cmp(int a,int b){
	if(mp[b] < mp[a]) return true;
	else if(mp[b] == mp[a] && b > a) return true;
	return false;  
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		mp.clear();
		for(auto &i:a){
			cin >> i; mp[i]++;
		}
		sort(a,a+n,cmp);
		for(auto i:a) cout << i <<" ";
		cout << endl;
	}
}


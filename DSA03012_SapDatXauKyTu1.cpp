//3
//geeksforgeeks
//bbbabaaacd
//bbbbb
//
//1
//1
//-1

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char,long long>mp;
		long long m = INT_MIN;
		for(int i = 0; i < s.size();i++){
			mp[s[i]]++;
			m = max(m,mp[s[i]]);
		}
		if((s.size()) - m >= m-1) cout << 1;
		else cout << -1;
		cout << endl;
	}
}

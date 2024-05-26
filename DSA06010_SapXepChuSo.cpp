// 2
// 3
// 131 11 48
// 4
// 111 222 333 446

// 1 3 4 8
// 1 2 3 4 6

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<char>se;
		while(n--){
			string s; cin >> s;
			for(int i = 0; i < s.size();i++){
				se.insert(s[i]);
			}
		}
		for(auto i:se) cout <<  i <<" ";
		cout << endl;
	}
}


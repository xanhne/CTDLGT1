// 6

// 5 8 3 9 1 4

// Buoc 5: 1 3 4 5 8 9

// Buoc 4: 1 3 5 8 9

// Buoc 3: 3 5 8 9

// Buoc 2: 3 5 8

// Buoc 1: 5 8

// Buoc 0: 5

include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(auto &i:a) cin >> i;
	vector<vector<string>>ve;
	multiset<int>mu;
	for(int i = 0; i < n; i++){
		mu.insert(a[i]);
		vector<string>v;
		string k = "Buoc "+to_string(i)+":";
		v.push_back(k);
		for(auto x:mu){
			v.push_back(to_string(x));
		}
		ve.push_back(v);
	}
	for(int i=ve.size()-1; i >= 0; i--){
		for(int j = 0; j < ve[i].size(); j++) cout << ve[i][j] <<" ";
		cout << endl;
	}
}


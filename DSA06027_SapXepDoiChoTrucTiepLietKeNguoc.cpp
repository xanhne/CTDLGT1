// 1

// 6

// 5 8 3 9 1 4

// Buoc 5: 1 3 4 5 8 9

// Buoc 4: 1 3 4 5 9 8

// Buoc 3: 1 3 4 9 8 5

// Buoc 2: 1 3 8 9 5 4

// Buoc 1: 1 8 5 9 3 4

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		vector<vector<string>>ve;
		for(auto &i:a) cin >> i;
		for(int i = 0; i < n-1; i++){
			for(int j = i + 1; j < n;j++){
				if(a[i] > a[j]){
					int tmp = a[i];
					a[i] = a[j]; a[j] = tmp;
				}
			}
			vector<string>v;
			string k = "Buoc "+to_string(i+1)+":";
			v.push_back(k);
			for(int g:a){
				v.push_back(to_string(g));
			}
			ve.push_back(v);
		}
		for(int i = ve.size()-1; i >=0; i--){
			for(int j = 0; j < ve[i].size();j++){
				cout << ve[i][j]<<" ";
			}
			cout << endl;
		}
	}
}

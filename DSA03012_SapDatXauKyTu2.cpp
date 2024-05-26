//2
//2
//
//ABB
//2
//AAA
//
//1
//-1

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define se second

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t; cin >> t;
	while(t--){
		int d;
		string s; cin >>d >> s;
		map<char,long long>mpp;
		vector<ll>v;
		for(int i = 0; i < s.size();i++){
			mpp[s[i]]++;
		}
		for(auto it:mpp){
			v.push_back(it.se);
		}
		int ok = 1;
		sort(v.begin(),v.end(),greater<ll>());
		for(int i = 0; i < v.size(); i++){
			int ts = v[i];
			for(int k = 0; k < ts; k++){
				if(i + k*d >= s.size()){
					ok = 0; break;
				}
			}
			if(!ok) break;
		}
		if(ok) cout <<1;
		else cout <<-1;
		cout << endl;
	}
}

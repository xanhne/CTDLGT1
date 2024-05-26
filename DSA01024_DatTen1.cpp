//6 2
//
//DONG TAY NAM BAC TAY BAC
//
//BAC DONG
//
//BAC NAM
//
//BAC TAY
//
//DONG NAM
//
//DONG TAY
//
//NAM TAY

#include<bits/stdc++.h>
using namespace std;

int a[1005];
int n,k; 
vector<string>v;

void ql(int i){
	for(int j = a[i-1]+1; j <= v.size() - k + i; j++){
		a[i] = j;
		if(i == k){
			for(int g = 1; g <= k; g++){
				cout << v[a[g]-1]<<" ";
			}
			cout << endl;
		}else ql(i+1);
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
	// cin >> t;
    while(t--){
    	cin >> n >> k;
    	set<string>s;
    	for(int i = 0; i < n; i++){
    		string x; cin >> x; s.insert(x);
		}
    	for(auto i:s){
    		v.push_back(i);
		}
		ql(1);
    }
}

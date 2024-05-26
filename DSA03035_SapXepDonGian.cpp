//5
//
//4 1 2 5 3
//
//2

#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
typedef pair <int,int> pi;

bool cmp(pi a, pi b){
	if(a.fi != b.fi){
		if(a.fi < b.fi) return true;
		return false;
	}
	return a.se < b.se;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t = 1; 
	//cin >> t;
	while(t--){
		int n; cin >> n;
		pi pa[n];
		for(int i = 0; i < n; i++){
			cin >> pa[i].fi; pa[i].se = i;
		}
		sort(pa,pa+n,cmp);
		int cnt = 1;
		int d = 0;
		for(int i = 1;i < n; i++){
			if(pa[i].se > pa[i-1].se){
				cnt++;
			}else{
				d = max(cnt,d); cnt = 1;
			}
		}
		d = max(d,cnt);
		cout << n - d;
	}
}

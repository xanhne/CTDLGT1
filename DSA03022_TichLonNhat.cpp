//6
//
//5 10 -2 3 5 2
//
//250

#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
typedef pair <int,int> pi;

bool cmp(pi a, pi b){
	if(a.se < b.se) return true;
	if(a.fi == b.fi){
		if(a.se  < b.se) return true;
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	for (int i = 0; i < n; i++) cin >> a[i];
    	sort(a,a+n);
    	cout << max(a[0] * a[1] * a[n-1],a[n-1]*a[n-2]*a[n-3]);
    }
}

//1
//
//10
//
//39 55
//
//37 74
//
//0 1
//
//19 25
//
//65 76
//
//51 52
//
//19 21
//
//5 94
//
//46 65
//
//32 40
//
//5

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
    cin>>t;
    while(t--){
    	int n; cin >> n;
    	pi a[n+1];
    	for (int i = 1; i <= n; i++){
    		cin >> a[i].fi >> a[i].se;
		}
		sort(a+1,a+n+1,cmp);
		int dem = 1;
		int k = a[1].se;
		for(int i = 2; i <= n;i++){
			if(a[i].fi >= k){
				dem++;
				k = a[i].se;
			}
			//cout << a[i].fi <<" "<<a[i].se << endl;
		}
		cout <<dem << endl;
    }
}

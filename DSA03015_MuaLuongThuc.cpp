//2
//16 10 2
//20 10 30
//
//2
//-1

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	ll n,m,s; cin >> n >> s >> m;
    	if(n < m || (6*n) - (6*m) < m) cout << -1;
    	else{
    		ll k = 0;
    		for(int i = 1; i <= 30; i++){
    			if((n*i)/m >= s){
    				k = i; break;
				}
			}
			cout << k;
		}
		cout << endl;
    }
}

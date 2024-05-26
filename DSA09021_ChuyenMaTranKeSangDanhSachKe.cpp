//3
//
//0 1 1
//
//1 0 1
//
//1 1 0
//
//2 3
//
//1 3
//
//1 2

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	int n; 
		cin >> n;
    	multiset <int> mu[n+1];
    	for(int i = 1; i <= n; i++){
    		for(int j = 1; j <= n; j++){
    			int x; cin >> x;
    			if(x){
    				mu[i].insert(j);
				}
			}
		}
		for(int i = 1; i <= n; i++){
			for(auto it : mu[i]) cout << it <<" ";
			cout << endl;
		}
    }
}

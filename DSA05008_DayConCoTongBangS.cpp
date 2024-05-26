//2
//
//5 6
//1 2 4 3 5
//
//10 15
//
//2 2 2 2 2 2 2 2 2 2
//
//YES
//
//NO

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	long long n,s; cin >> n >> s;
    	long long a[n+1];
    	for (int i = 1; i <= n; i++) cin >> a[i];
    	bool used[n+1][s+5];
    	for(int i = 1; i <= s; i++) used[0][i] = false;
    	for(int i = 0; i <= n; i++) used[i][0] = true;
    	for(int i = 1; i <= n; i++){
    		for(int j = 1; j <= s; j++){
    			used[i][j] = used[i-1][j];
    			if(j >= a[i]){
    				if(used[i-1][j-a[i]]) used[i][j] = true;
				}
			}
		}
		if(used[n][s]) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
    }
}

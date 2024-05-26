//2
//
//5 2
//
//10 3
//
// 
//
//10
//
//120

#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	long long n,k; 
		cin >> n >> k;
    	long long c[1005][1005];
    	for(int i = 0; i <= n; i++){
    		for(int j = 0; j <= i; j++){
    			if(i == j || j == 0) c[i][j] = 1;
    			else{
    				c[i][j] = c[i-1][j-1] + c[i-1][j];
    				c[i][j]%=mod;
				}
			}
		}
		cout << c[n][k] << endl;
    }
}

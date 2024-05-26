//1
//
//15 10
//
//5 2 1 3 5 2 5 8 9 6 3 1 4 7 8
//
//1 2 3 5 1 2 5 8 7 4 1 2 3 2 1
//
//15

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin>>t;
    while(t--){
    	int n,m; 
		cin >> n >> m;
    	int a[n+5],b[n+5];
    	for(int i = 1; i <= n; i++){
    		cin >> a[i];
		}
		for(int i = 1; i <= n; i++){
    		cin >> b[i];
		}
		long long dp[1005][1005]={0};
		long long ans = 0;
		for(int i = 1; i <= n;i++){
			for(int j = 1; j <= m; j++){
				dp[i][j] = dp[i-1][j];
				if(j >= a[i] && dp[i-1][j] < dp[i-1][j-a[i]] + b[i]){
					dp[i][j] = dp[i-1][j-a[i]] + b[i];
				}
				ans = max(ans,dp[i][j]);
			}
		}
		cout << ans<< endl;
    }
}

//2
//
//6  10  
//
//1 2 1 3 2 3 2 4 2 5 3 4 3 5 4 5 4 6 5 6
//
//6 9  
//
//1  2 1  3 2  3 2  4 2  5 3  4 3  5 4  5 4  6
//
//2
//
//1

#include<bits/stdc++.h>
using namespace std;

int n,m;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> m;
    	int ok = 0;
    	int IN[n+1]={0},OUT[n+1]={0};
    	for (int i = 0; i < m; i++){
    		int x,y; cin >> x >> y; IN[y]++;OUT[x]++;
		}
		int cnt = 0,cnt1=0;
		for (int i = 1; i <= n; i++){
			if((IN[i]+OUT[i])% 2 == 0){
				cnt++;
			}else cnt1++;
		}
		if(cnt == n) cout << 2;
		else if(cnt1 == 2) cout << 1;
		else cout << 0;
		cout << endl;
    }
}


//2
//
//6  10  
//
//1 2 2 4 2 5 3 1 3 2 4 3 4 5 5 3 5 6 6 4
//
//3 3
//
//1 2 2 3 1 3
//
//1
//
//0

#include<bits/stdc++.h>
using namespace std;

vector<int> v[1001];
bool used[1001];
int n,m,s,c,z;
int pre[1001];

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> m;
    	int IN[n+1] = {0},OUT[n+1]={0};
    	for (int i = 1; i <= m; i++){
    		int x,y; cin >> x >>  y; OUT[x]++;IN[y]++;
		}
		int ok = 1;
		for (int i = 1; i <= n; i++){
			if(IN[i] != OUT[i]){
				ok  = 0;
				cout <<"0\n";
				break;
			}
		}
		if(ok) cout <<"1\n";
    }
}

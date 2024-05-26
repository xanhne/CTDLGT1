//1
//
//6 5
//
//1 2
//
//2 3
//
//3 4
//
//1 4
//
//5 6
//
//2
//
//1 5
//
//2 4
//
//NO
//
//YES

#include<bits/stdc++.h>
using namespace std;

vector<int> v[1001];
bool used[1001];
int n,m,s,c,z;
int pre[1001];

void dfs(int u){
	used[u] = true;
	for(int x:v[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}

void bfs(int u){
	queue<int>q;
	used[u] = true;
	q.push(u);
	while(!q.empty()){
		int tmp = q.front(); q.pop();
		for(int x : v[tmp]){
			if(!used[x]){
				used[x] = true;
				q.push(x);
			}
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
	
    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> m;
    	for(int i = 1; i <= 1001; i++) v[i].clear();
    	memset(pre,0,sizeof(pre));
    	for (int i = 0; i < m; i++){
    		int x,y; 
			cin >> x >> y;
    		v[x].push_back(y); v[y].push_back(x);
		}
		bfs(1);
		cin >> z;
		while(z--){
			memset(used,false,sizeof(used));
			int x,y; 
			cin >> x >> y;
			bfs(x);
			if(!used[y]){
				cout <<"NO\n";
			}else cout <<"YES\n";
		}
    }
}

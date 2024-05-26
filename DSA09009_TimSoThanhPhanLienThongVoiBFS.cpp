//1
//
//6  6 
//
//1 2 1 3 2 3 3 4 3 5 4 5
//
//2

#include<bits/stdc++.h>
using namespace std;

vector<int> v[1001];
bool used[1001];
int n,m,s,c;
int pre[1001];

void dfs(int u){
	used[u] = true;
	for(int x:v[u]){
		if(!used[x]){
			pre[x] = u;
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
				pre[x] = tmp;
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
    	memset(used,false,sizeof(used));
    	for (int i = 0; i < m; i++){
    		int x,y; cin >> x >> y;
    		v[x].push_back(y); v[y].push_back(x);
		}
		int d = 0;
		for (int i = 1; i <= n; i++){
			if(!used[i]){
				d++; bfs(i);
			}
		}
		cout << d << endl;
    }
}

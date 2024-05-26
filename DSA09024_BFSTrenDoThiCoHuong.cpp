//1
//
//6  9  1
//
//1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4
//
//1 2 5 4 6 3

#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool used[1005];
int n,m,s;

void dfs(int u){
	cout << u << " ";
	used[u] = true;
	for(int x:v[u]){
		if(!used[x]) dfs(x);
	}
}

void bfs(int u){
	queue<int>q;
	used[u] = true;
	q.push(u);
	cout << u  <<" ";
	while(!q.empty()){
		int tmp = q.front(); q.pop();
		for(int x : v[tmp]){
			if(!used[x]){
				used[x] = true;
				cout << x <<" ";
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
    	cin >> n >> m >> s;
    	for(int i = 0; i <= 1004; i++) v[i].clear();
    	memset(used,false,sizeof(used));
    	for (int i = 1; i <= m; i++){
    		int x,y; 
			cin >> x >> y;
    		v[x].push_back(y);
		}
		bfs(s);
		cout << endl;
    }
}

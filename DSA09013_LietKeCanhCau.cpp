//1
//
//5 5
//
//1 2 
//
//1 3
//
//2 3
//
//2 5
//
//3 4
//
//2 5 3 4

#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
typedef pair <int,int> pi;

vector<int> v[1005];
bool used[1005];
int n,m,s, x1 , x2;

void dfs(int u){
	used[u] = true;
	for(int x:v[u]){
		if(x  == x1 && u == x2 || x == x2 && u == x1) continue;
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
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> m ;
    	for(int i = 0; i <= 1004; i++) v[i].clear();
    	memset(used,false,sizeof(used));
    	pi a[m];
    	for (int i = 0; i < m; i++){
    		int x,y; cin >> x >> y;
    		a[i] = {x,y};
    		v[x].push_back(y); v[y].push_back(x);
		}
		for(pi i : a){
			int d = 0;
			memset(used,false,sizeof(used));
			x1 = i.fi; x2 = i.se;
			for (int j = 1; j <= n; j++){
				if(!used[j]){
					d++;
					dfs(j);
				}
			}
			if(d > 1){
				cout << min(i.fi, i.se) <<" "<<max(i.fi, i.se) <<" ";
			}
		}
		cout << endl;
    }
}

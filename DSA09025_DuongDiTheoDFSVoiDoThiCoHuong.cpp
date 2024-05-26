//1
//
//6  9  1  6
//
//1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4
//
//1 2 5 6

#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool used[1005];
int n,m,s,c;
int pre[1005];

void dfs(int u){
	used[u] = true;
	for(int x:v[u]){
		if(!used[x]){
			pre[x] = u;
			dfs(x);
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> m >> s >> c;
    	for(int i = 1; i <= 1005; i++) v[i].clear();
    	memset(pre,0,sizeof(pre));
    	memset(used,false,sizeof(used));
    	for (int i = 1; i <= m; i++){
    		int x,y; 
			cin >> x >> y;
    		v[x].push_back(y);
		}
		dfs(s);
		if(!used[c]){
			cout <<"-1\n";
			continue;
		}
		vector<int> ve;
		while(s!=c){
			ve.push_back(c);
			c = pre[c];
		}
		ve.push_back(s);
		reverse(ve.begin(),ve.end());
		for(int i : ve) cout << i <<" ";
		cout << endl;
    }
}

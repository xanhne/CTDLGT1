//2
//
//4
//
//1  0  0  0
//
//1  1  0  1 
//
//0  1  0  0 
//
//1  1  1  1
//
//5
//
//1 0 0 0 0
//
//1 1 1 1 1
//
//1 1 0 0 1
//
//0 1 1 1 1
//
//0 0 0 1 1
//
//DRDDRR
//
//DDRDRRDR DDRDRRRD DRDDRRDR DRDDRRRD DRRRRDDD

#include<bits/stdc++.h>
using namespace std;

typedef pair <int,int> pi;

int n,m,ok;
int a[15][15];
bool used[105][105];
pi path[2]={{1,0},{0,1}};

void ql(int i, int j,string s){
	if(a[0][0] != 1 || a[n-1][n-1]!=1){
		ok = 0;
		return;
	}
	if(i == n-1 && j == n -1){
		ok = 1;
		cout << s <<" "; return;
	}
	for(int k = 0; k < 2; k++){
		int x = i + path[k].first;
		int y = j + path[k].second;
		if(x >= 0 && x < n && y >= 0 && y < n && a[x][y] == 1 && !used[x][y]){
			used[x][y] = true;
			if(k == 0){
				ql(x,y,s+"D");
			}else ql(x,y,s+"R");
			used[x][y] = false;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	cin >> n;
    	a[15][15]={};
    	ok = 0;
    	memset(used,false,sizeof(used));
    	for (int i = 0; i < n; i++){
    		for (int j = 0; j < n; j++) cin >> a[i][j];
		}
		ql(0,0,"");
		if(!ok) cout << -1;
		cout << endl;
    }
}

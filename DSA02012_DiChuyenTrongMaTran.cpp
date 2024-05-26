//2
//2  3
//
//1  2  3 
//
//4  5  6
//2  2
//
//1  2 
//
//3  4
//
//3
//
//2

#include<bits/stdc++.h>
using namespace std;

typedef pair <int,int> pi;

pi pa[2] ={{1,0},{0,1}};
int dem = 0;
int a[105][105];
bool used[105][105];
int n,m;

void ql(int i, int j){
	if(i == n-1 && j == m-1){
		dem++; return;
	}
	for(int k = 0; k < 2; k++){
		int x = i + pa[k].first;
		int y = j + pa[k].second;
		if(x >= 0 && x < n && y >= 0 && y < m && !used[x][y]){
			used[x][y] = true;
			ql(x,y);
			used[x][y] = false;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	dem = 0;
    	a[105][105]={};
    	cin >> n >> m;
    	for (int i = 0; i < n; i++){
    		for (int j = 0; j < m; j++) cin >> a[i][j];
		}
		memset(used,false,sizeof(used));
		ql(0,0);
		cout << dem << endl;
    }
}

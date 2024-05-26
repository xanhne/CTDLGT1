//4
//
//0 20 35 10
//
//20 0 90 50
//
//35 90 0 12
//
//10 50 12 0
//
//117

#include<bits/stdc++.h>
using namespace std;

bool used[1005];
int a[20][20];
int n;
int omp = 0;
int dmin = INT_MAX;
int opt = INT_MAX;
int b[1005];

void ql(int i){
	for(int j = 2; j <= n;j++){
		if(!used[j]){
			b[i] = j; used[j] = true;
			omp += a[b[i-1]][b[i]];
			if(i == n) opt = min(opt,omp + a[b[n]][1]);
			else if(omp + (n-i+1)*dmin < opt){
				ql(i+1);
			}
			used[j] = false;omp -= a[b[i-1]][b[i]];
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	cin >> n;
    	memset(used,false,sizeof(used));
    	for (int i = 1; i <= n; i++){
    		for (int j = 1; j <= n; j++){
    			cin >> a[i][j];
    			dmin = min(dmin,a[i][j]);
			}
		}
		b[1]=1;
		ql(2);
		cout << opt;
    }
}

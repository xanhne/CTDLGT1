//1
//
//4
//
// 
//
//2

#include<bits/stdc++.h>
using namespace std;

int n;
int nguoc[1005],xuoi[1005],a[1005],cnt;

void ql(int i){
	for(int j = 1; j <= n; j++){
		if(a[j] && xuoi[i-j+n] && nguoc[i+j-1]){
			a[j] = xuoi[i-j+n] = nguoc[i+j-1] = 0;
			if(i==n) cnt++;
			else ql(i+1);
			a[j] = xuoi[i-j+n] = nguoc[i+j-1] = 1;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	cin >> n;
    	cnt = 0;
    	for(int i = 0; i < 100; i++){
    		a[i] = nguoc[i] = xuoi[i] = 1;
		}
		ql(1);
		cout << cnt << endl;
    }
}


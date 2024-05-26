//3
//
//6 5 8
//
//1 5 10 20 40 80
//
//5 7 20 80 100
//
//3 4 15 20 30 70 80 120
//
//3 5 4
//
//1 5 5
//
//3 4 5 5 10
//
//5 5 10 20
//
//3 3 3
//
//1 2 3
//
//4 5 6
//
//7 8 9
//
//20 80
//
//5 5
//
//NO

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	int n,m,k,ok = 0; cin >> n >> m >> k;
    	int a[n+5],b[m+5],c[k+5];
    	for (int i = 0; i < n; i++) cin >> a[i];
    	for (int i = 0; i < m; i++) cin >> b[i];
    	for (int i = 0; i < k; i++) cin >> c[i];

    	int j = 0,x = 0;
    	for (int i = 0; i < n; i++){
    		while(a[i] > b[j] && j < m) j++;
    		while(a[i] > c[x] && x < k) x++;
    		if(a[i] == b[j] && a[i] == c[x]){
    			j++; x++; ok = 1;
    			cout <<a[i]<<" ";
			}
		}
		if(!ok) cout << "NO";
		cout << endl;
    }
}

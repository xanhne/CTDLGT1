//2
//7
//1 6 3 4 5 2 7
//7
//1 6 3 4 5 7 2
//
//Yes
//No

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	int n; cin >> n;
    	int a[n+5];
    	for (int i = 1; i <= n; i++) cin >> a[i];
    	int ok = 1;
    	for (int i = 1; i <= n; i++){
    		if(a[i] !=i && a[i] != n - i + 1){
    			ok = 0; break;
			}
		}
		(ok)?(cout<<"Yes"):(cout<<"No");
		cout << endl; 
    }
}

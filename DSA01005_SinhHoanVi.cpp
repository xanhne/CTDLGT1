//2
//
//2
//
//3
//
//12  21
//
//123 132  213  231  312  321

#include<bits/stdc++.h>
using namespace std;

bool used[1005];
int a[1005];
int n;

void hv(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == n){
				for(int g = 1; g <= n;g++) cout << a[g];
				cout <<" ";
			}else hv(i+1);
			used[j] = false;
			
 		}
	}
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	a[1005];
    	cin >> n;
    	memset(used,false,sizeof(used));
    	hv(1);
    	cout << endl;
    }
}


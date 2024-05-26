//2
//
//6 4
//
//1 3 5 6
//
//6 4
//
//2 3 4 6
//
//9
//
//12

#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[1005],b[1005],ok;

void next(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i) i--;
	if(i == 0) ok = 0;
	a[i]++;
	for(int j = i+1; j <= k ;j++) a[j] = a[i] + j - i; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	a[1005] = {0};
    	b[1005] ={0};
    	cin >> n >> k;
    	for(int i = 1; i <= k;i++){
    		a[i] = i; cin >> b[i];
		}
		int k1 = 1;
		ok = 1;
		while(ok){
			int ok1 = 1;
			for(int i = 1; i <= k;i++){
				if(a[i] != b[i]){
					ok1 = 0; break;
				}
				//cout << a[i]<<" ";
			}
			if(ok1){
				cout << k1;
				break;
			}
			else{
				k1++;
			}
			next();
		}
		cout << endl;
    }
}

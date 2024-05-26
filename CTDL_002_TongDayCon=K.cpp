// 10                    15                    25
//
//           5                      20                    25
//
//          5                      10                    15                    20
//
//           3

#include<bits/stdc++.h>
using namespace std;

int n,k; 
int a[100],b[100],dem = 0;

int sum(int b[]){
	int g = 0;
	for(int i = 0; i < n; i++){
		if(b[i] == 1) g+=a[i];
	}
	return g;
}

void ql(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n-1){
			if(sum(b) == k){
				dem++;
				for(int i = 0; i < n; i++){
					if(b[i] == 1) cout << a[i]<<" ";
				}
				cout << endl;
			}
		}
		else ql(i+1);
	}
}

int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	ql(0);
	cout << dem;
}


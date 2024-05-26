//2
//
//4 2
//
//3 2
//
// 
//
//0011
//
//0101
//
//0110
//
//1001
//
//1010
//
//1100
//
//011
//
//101
//
//110

#include<bits/stdc++.h>
using namespace std;

int a[1005];
int n,k;
int check(){
	int dem = 0;
	for(int i = 0; i < n;i++){
		if(a[i] == 1) dem++;
	}
	if(dem == k) return 1;
	return 0;
}

void ql(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n-1){
			if(check()){
				for(int g = 0; g < n;g++) cout << a[g];
				cout << endl;
			}
		}else ql(i+1);
	}
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	a[1005]={};
    	cin >> n >> k;
    	ql(0);
    }
}

//8 3
//
//2 4 4 3 5 1 3 4
//
//1 2 3
//
//1 2 4
//
//1 2 5
//
//1 3 4
//
//1 3 5
//
//1 4 5
//
//2 3 4
//
//2 3 5
//
//2 4 5
//
//3 4 5

#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[1005],b[1005];
int l1 = 0;

void ql(int i){
	for(int j = a[i-1] + 1; j <= l1-k+i; j++){
		a[i] = j;
		if(i == k){
			for(int g = 1; g <= k; g++){
				cout << b[a[g]-1] <<" ";
			}
			cout << endl;
		}else ql(i+1);
	}
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	a[1005] = {0};
    	b[1005] ={};
    	cin >> n >> k;
    	set<int>se;
    	for (int i = 0; i < n; i++){
    		int x; cin >> x;se.insert(x);
		}
    	for(auto i:se) b[l1++] = i;
    	ql(1);
    }
}


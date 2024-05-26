//2
//
//2
//
//3
//
//AA AB BA BB
//
//AAA AAB ABA ABB BAA BAB BBA BBB

#include<bits/stdc++.h>
using namespace std;

int a[1005];
int n;

void sinh(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n-1){
			for(int g = 0; g < n;g++){
				if(!a[g]) cout <<"A";
				else cout <<"B";
			}
			cout <<" ";
		}
		else sinh(i+1);
	}
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	a[1005]={};
    	cin >> n;
    	sinh(0);
    	cout << endl;
    }
}

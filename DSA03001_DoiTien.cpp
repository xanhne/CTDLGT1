//2
//
//70
//
//121
//
// 
//
//2
//
//3

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t=1;
   	cin>>t;
    int a[10]={1000,500,200,100,50,20,10,5,2,1};
    while(t--){
    	ll n,count = 0; cin >> n;
    	for(int i = 0; i < 10; i++){
    		count += n/a[i];
    		n%=a[i];
		}
		cout << count << endl;
    }
}

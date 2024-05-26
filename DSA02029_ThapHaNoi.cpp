//3
//
// 
//
//A -> C
//
//A -> B
//
//C -> B
//
//A -> C
//
//B -> A
//
//B -> C
//
//A -> C

#include<bits/stdc++.h>
using namespace std;

char a = 'A',b = 'B',c = 'C';
int n;

void chuyen(int n, char a, char b){
	cout << a <<" -> " << b;
	cout << endl;
}

void ql(int n, char a, char b, char c){
	if(n==1) chuyen(1,a,c);
	else{
		ql(n-1,a,c,b);
		chuyen(n,a,c);
		ql(n-1,b,a,c);
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
   // cin>>t;
    while(t--){
    	cin >> n;
    	ql(n,a,b,c);
    }
}

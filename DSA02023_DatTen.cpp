//6 2
//
//DONG TAY NAM BAC TAY BAC
//
//BAC DONG
//
//BAC NAM
//
//BAC TAY
//
//DONG NAM
//
//DONG TAY
//
//NAM TAY

#include<bits/stdc++.h>
using namespace std;

int n,k;
set<string>s;
vector<string>v;
int a[50];

void Out(){
	string x = "",y = "";
	for(int i = 1; i <= k; i++){
		cout << v[a[i]-1]<<" ";
	}
	cout << endl;
}

int check(){
	set<string>g;
	for(int i = 1; i <= k;i++){
		g.insert(v[a[i]-1]);
	}
	if(g.size() < k) return 0;
	return 1;
}

void back(int i){
	for(int j = a[i-1] + 1; j <= v.size() - k + i; j++){
		a[i] = j;
		if(i == k){
			//if(check()){
				Out();
			//}
		}else{
			back(i+1);
		}
	}
}

int main(){
	set<string>se;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		string y ="";
		cin >> y;se.insert(y);
	}
	for(auto i:se) v.push_back(i);
	a[50]={0};
	back(1);
	
}


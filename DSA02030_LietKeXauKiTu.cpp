//D 2
//
//AA
//
//AB
//
//AC
//
//AD
//
//BB
//
//BC
//
//BD
//
//CC
//
//CD
//
//DD

#include<bits/stdc++.h>
using namespace std;

int n,k;
char c;
vector<int> v;

void ql(int id, int vt, string s){
	if(id == k){
		cout << s << endl;
		return;
	}
	for(int i = vt; i < v.size(); i++){
		ql(id+1,i,s + (char)(v[i] +'A'));
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	v.clear();
    	cin >> c >> k;
    	for(int i = 0; i <= c-65;i++){
    		v.push_back(i);
		}
		ql(0,0,"");
    }
}

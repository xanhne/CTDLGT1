//D
//
//ABCD
//
//ABDC
//
//ACBD
//
//ACDB
//
//ADBC
//
//ADCB
//
//BCDA
//
//BDCA
//
//CBDA
//
//CDBA
//
//DBCA
//
//DCBA

#include<bits/stdc++.h>
using namespace std;

bool used[1005];
vector<int> v;
int a[1005]; 

bool check(){
	for(int i = 1; i <= v.size()-1; i++){
		if(a[i] == 0 && (a[i-1]!=4 && a[i+1]!=4) 
			||(a[i]== 4&&(a[i-1]!=0&&a[i+1]!=0))) return false;
	}
	return true;
}

void ql(int i){
	for(int j = 0; j <= v.size(); j++){
		if(!used[j]){
			used[j] = true;
			a[i] = j;
			if(i == v.size() && check()){
				for(int g = 0; g <= v.size(); g++){
					cout << (char)(a[g]+65);
				}
				cout << endl;
			}else ql(i+1);
			used[j] = false;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
		char c;
    	cin >> c;
    	memset(used,false,sizeof(used));
    	for(int i = 0; i < c-'A'; i++){
    		v.push_back(i);
		}
		ql(0);
    }
}

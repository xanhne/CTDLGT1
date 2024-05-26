// 2
// 4 3
// 1 10 4 2
// 3 5
// 2 3 4

// 2
// 3

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int>a(n);
		long long dem=0;
		for(auto &i:a)cin>>i;
		stable_sort(a.begin(),a.end());
		for(int i=0;i<n-1;i++){
			int k=a[i]+x;
			int c;
			auto k2=lower_bound(a.begin(),a.end(),k)-a.begin();
			c=k2-i-1;
			if(c>=1) dem+=c;
		}
		cout<<dem<<endl;
	}
}


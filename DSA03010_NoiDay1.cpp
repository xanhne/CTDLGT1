//2
//4
//4 3 2 6
//5
//4 2 7 6 9
//
//29
//62

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		multiset<long long>mu;
		long long money = 0;
		while(n--){
			int x; cin >> x; mu.insert(x);
		}
		while(mu.size() > 1){
			long long sum = 0;
			auto it1 = mu.begin();
			sum += *it1;
			mu.erase(it1);
			auto it2 = mu.begin();
			sum += *it2;
			mu.erase(it2);
			money +=  sum;
			mu.insert(sum);
		}
		cout << money << endl;
	}
}


// 2

// 7

// 10 5 3 4 3 5 6

// 4

// 1 2 3 4

// 5

// NO

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n; //So luong phan tu
		long long a[n]; // Khai bao mang de luu day so
		long long ok = 0,g; //Khai bao bien ok de kiem tra xem co so nao lap lai, bien g de luu gia tri so do
		map<long long,long long>mp; //Khai bao doi tuong map de dem so lan xuat hien cua tung phan tu trong mang
		for(auto &i:a){
			cin >> i;mp[i]++;
		}
		for(auto i:a){
			if(mp[i] > 1 && ok == 0){ //Duyet mang a va tim phan tu dau tien co so lan xuat hien lon hon 1
				g = i; ok = 1; //Luu gia tri vao bien g
				break;
			}
		}
		if(ok) cout << g; //Kiem tra xem co phan tu nao lap lai hay khong
		else cout <<"NO";
		cout << endl;
	}
}



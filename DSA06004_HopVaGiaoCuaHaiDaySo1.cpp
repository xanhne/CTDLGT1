// 1
// 5 3
// 1 2 3 4 5
// 1 2 3

// 1 2 3 4 5

// 1 2 3

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--){
        int n, m, x;
        cin >> n >> m;
        map<int, int> a, b, c;
        for (int i = 0; i < n; i++){
            cin >> x;
            a[x]++;
            c[x]++;
        }
        for (int i = 0; i < m; i++){
            cin >> x;
            b[x]++;
            c[x]++;
        }
        for (auto i : c)
            cout << i.first << " ";
        cout << endl;
        for (auto i : a){
            if (b[i.first] > 0)
                cout << i.first << " ";
        }
        cout << endl;
    }
}
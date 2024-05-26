// 1
// 6 5
// 7 1 5 2 3 6
// 3 8 6 20 7
 

// 1 2 3 5 6 7 8 20

// 2 6

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
// 2
// 7
// 2 4 6 8 9 10 12
// 2 4 6 8 10 12
// 6
// 3 5 7 9 11 13
// 3 5 7 11 13

// 5
// 4

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++){
            if (a[i] != b[i]){
                cout << i + 1 << endl;
                break;
            }
        }
    }
}
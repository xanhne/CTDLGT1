// 1
// 6 5 8
// 1 5 10 20 40 80
// 6 7 20 80 100
// 3 4 15 20 30 70 80 120

// 20 80

#include<bits/stdc++.h>
using namespace std;

void nhap(long long a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int n, m, p, x=0, y=0, z=0;
        cin >> n >> m >> p;
        long long a[n], b[m], c[p]; nhap(a,n); nhap(b,m); nhap(c,p);
        for(int i=0;i<n;i++){
            while(a[i]>b[y]&&y<m) y++;
            while(a[i]>c[z]&&z<p) z++;
            if(a[i]==b[y]&&a[i]==c[z]){
                y++;
                z++;
                cout<<a[i]<<" ";
                x=1;
            }
        }
        if(x==0) cout<<"-1";
        cout<<"\n";
    }
    return 0;
}


// 2

// 7

// -7 1 5 2 -4 3 0

// 5

// 1 2 3 4 5

 

// 4

// -1

#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          int a[n],ll=0;
          for(int i=0;i<n;i++){
               cin>>a[i];
               ll+=a[i];
          }
          ll-=a[0];
          int m=0,v=0;
          for(int i=1;i<n;i++){
               m+=a[i-1];
               ll-=a[i];
               if(ll==m){
                    cout<<i+1<<endl;
                    v=1;
                    break;
               }
          }
          if(v==0) cout<<"-1"<<endl;
     }
}


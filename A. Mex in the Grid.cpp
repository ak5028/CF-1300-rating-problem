#include <bits/stdc++.h>
using namespace std;

int a[505][505];
int main()
    int test;cin>>test;
    while(test--){
        int n;cin>>n;
        int i=(n+1)/2,j=i,cnt=0;
        for(int l=1;l<=n;l++){
            int t=(l&1?1:-1);
            for(int k=1;k<=l;k++,i+=t){a[i][j]=cnt++;}
            for(int k=1;k<=l;k++,j+=t){a[i][j]=cnt++;}
        }
        for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cout<<a[i][j]<<" ";}cout<<endl;}
    }
}

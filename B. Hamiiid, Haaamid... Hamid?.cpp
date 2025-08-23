//AKJ
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;cin>>t;
    while(t--){
        ll n,x;cin>>n>>x;
        string s;cin>>s;char a[n+1];ll wall=0;
        for(ll i=0;i<n;i++){
            a[i+1]=s[i];
            if(s[i]=='#'){wall++;}
        }
        if(x==1 || x==n){cout<<1<<endl;}
        else if(wall==0){cout<<1<<endl;}
        else{
            ll r=-1,l=-1;
            for(ll i=x+1;i<=n;i++){
                if(a[i]=='#'){r=n-i+1;break;}
            }
            for(ll i=x-1;i>=1;i--){
                if(a[i]=='#'){l=i;break;}     
            }
            if(r<l){r=n-(x+1)+1;}
            else if(l<r){l=x-1;}
            else if(l==r){l=x-1;}
            ll ans=min(l,r)+1;
            cout<<ans<<endl;
        }
    }
}

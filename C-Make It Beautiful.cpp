#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        ll a[n];ll s,ans=0;
        for(int i=0;i<n;i++){cin>>a[i];}
        for(int j=0;j<60;j++){
            for(int i=0;i<n;i++){
                if(a[i]>>j &1){ans++;}
                else{
                    s=1ll<<j;
                    if(k>=s){
                        ans++;
                        k-=s;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}

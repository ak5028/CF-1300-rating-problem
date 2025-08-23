//AK
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main(){
      ll t;cin>>t;
      while(t--){
        ll n,k;cin>>n>>k;
        ll d[n+1];
        for(ll i=1;i<=n;i++){cin>>d[i];}

        //for first 2d1-1<=k for first ship to be sink
        //for last ship to be sink 2dn<=k
        //inn dono mein se small value hogi vo ship pehle sink kr jayegi
        ll s=1,e=n,cnt=0;
        while(s<=e){
                if(k<=0){break;}
                if(s==e){if(d[s]<=k){cnt++;}break;}
                else{
                        ll b1=2*d[s]-1;
                        ll b2=2*d[e];
                        ll c=min(b1,b2);
                        if(c<=k){
                                cnt++;k-=c;
                                if(b1<=b2){
                                        d[e]-=d[s]-1;
                                        if(k>=1){d[e]-=1;k-=1;if(d[e]==0){cnt++;e--;}}
                                        else{break;}
                                        s++;
                                }
                                else{
                                        d[s]-=d[e];e--;
                                }
                        }
                        else{break;}
                }
        }
        cout<<cnt<<endl;
     }
}

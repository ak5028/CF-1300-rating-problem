//AK
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main(){
      int t;cin>>t;
      while(t--){
        ll n,m;cin>>n>>m;
        ll a[n+1],b[n+1],s=0;
        for(ll i=1;i<=n;i++){cin>>a[i];}
        for(ll i=1;i<=n;i++){cin>>b[i];}
        //hr aadmi ko bribe milegi yah toh a[i] amount ya b[i] amount 
        //ab vo toh mininum dena chahta h so we choose min of a[i],b[i] ,m tk krenge
        for(ll i=n;i>m;i--){
                if(a[i]<b[i]){s+=a[i];}
                else{s+=b[i];}
        } 
        //jrruri nhi h ki mth person pr hi khatam ho ,beech mein bhi ho skta hai
        //jha tk minimum bnega amount
        ll mini=a[m],c=b[m];
        for(ll i=m-1;i>=1;i--){
                mini=min(mini,c+a[i]);
                c+=b[i];
        }
        cout<<s+mini<<endl;
}
        
} 

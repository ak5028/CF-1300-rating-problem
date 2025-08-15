#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int test;cin>>test;
    while(test--){
        int n,k;cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }int ans=-1;
        if(n==k){
            int j=1,x=0;
        for(int i=1;i<n;i+=2){
            if(a[i]!=j){x++;ans=j;break;}j++;
        }
        if(x==0){ans=1+k/2;}cout<<ans<<endl;
        }
        else{
        int d=n-k;
        for(int i=1;i<=d+1;i++){
            if(a[i]!=1){ans=1;break;}
        }
        if(ans==-1){ans=2;}    
        cout<<ans<<endl;}
    }
}
    
    

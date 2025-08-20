#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
 
int main(){
      int t;cin>>t;
      while(t--){
        int n,x,y;cin>>n>>x>>y;int a[x+1];a[0]=0;
        for(int i=1;i<=x;i++){cin>>a[i];}
        sort(a,a+x+1);
        int cnt=0;
                if(a[2]-a[1]==2){cnt++;}
                if(a[x]-a[1]==n-2){cnt++;}
        
        for(int i=2;i<x;i++){
                if(a[i+1]-a[i]==2){cnt+=2;}
                else{cnt++;}
        }
        cout<<cnt<<endl;
     }
        
} 

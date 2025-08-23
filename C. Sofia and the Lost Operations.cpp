//AK
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main(){
      ll t;cin>>t;
      while(t--){
        int n;cin>>n;
        int a[n],b[n];map<int,int>mp,mp2;
        for(int i=0;i<n;i++){cin>>a[i];}
        for(int i=0;i<n;i++){cin>>b[i];mp2[b[i]]++;}
        int m;cin>>m;int d[m];
        for(int i=0;i<m;i++){cin>>d[i];mp[d[i]]++;}
        
        //last element of d should be present in array b 
        //otherwise last element will change the value of b
        //if it is present then all b[i] for which a[i]!=b[i] should be presnt in d
        //to make target array b
        if(mp2.count(d[m-1])==0){cout<<"NO"<<endl;}

        else{ int x=0;
                for(int i=0;i<n;i++){
                        if(a[i]!=b[i]){
                                if(mp.count(b[i])==0 || mp[b[i]]==0){x++;cout<<"NO"<<endl;break;}
                                else{mp[b[i]]--;}
                        }
                }
                if(x==0){cout<<"YES"<<endl;}
        }
        
      }
}

//AK
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main(){
      int t;cin>>t;
      while(t--){
        int n;cin>>n;
        vector<int>v,v1; map<int,int>mp; int ans=0;
        for(int i=0;i<n;i++){
                int x;cin>>x;
                mp[x]++;
        }
        for(auto val:mp){
                v.push_back(val.second);
                v1.push_back(val.first);
        }int x=0;
        for(int i=0;i<v.size();i++){
                if(v[i]>=2 && v1[i]==i){ans=i+1;}
                else if(v[i]==1 && x==0 && v1[i]==i){ans=i+1;x++;}
                else{break;}
        }
        cout<<ans<<endl;
     }
        
} 

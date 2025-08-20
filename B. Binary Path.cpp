#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
 
int main(){
      int t;cin>>t;
      while(t--){
        int n;cin>>n;
        string s1,s2;cin>>s1>>s2;
        int cnt=1,j;vector<char>v;v.push_back(s1[0]);
        for(j=0;j<n-1;j++){
                if(s1[j+1]==s2[j]){cnt++;v.push_back(s2[j]);}
                if(s1[j+1]-'0' < s2[j]-'0'){cnt=1; v.push_back(s1[j+1]);}
                if(s1[j+1]-'0' > s2[j]-'0'){v.push_back(s2[j]);break;}
        }
        if(j==n-1){v.push_back(s2[n-1]);}
        else{
                j++;
                while(j<n){
                        v.push_back(s2[j]);
                        j++;
                }
        }
        for(auto val:v){cout<<val;}
        cout<<endl<<cnt<<endl;
      }
} 

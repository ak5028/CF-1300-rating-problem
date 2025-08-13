#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int test;cin>>test;
    while(test--){
        int n;cin>>n;
        string s;cin>>s;
        if(s[0]=='p'){
            int x=0;
            for(int i=1;i<n;i++){if(s[i]=='s'){x++;break;}}
            if(x==0){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
        else if(s[n-1]=='s'){
            int x=0;
            for(int i=0;i<n-1;i++){if(s[i]=='p'){x++;break;}}
            if(x==0){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
        else{
            int z=0,w=0;
            for(int i=1;i<n-1;i++){
                if(s[i]=='s'){z++;}
                if(s[i]=='p'){w++;}
            }
            if(z>0 && w>0){cout<<"NO"<<endl;}
            else{cout<<"YES"<<endl;}
        }
        
    }
}

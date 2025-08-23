//AK
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main(){
      int t;cin>>t;
      while(t--){
       int n;cin>>n;
       string s1,s2;cin>>s1>>s2;
       char a[3][n+1];
       for(int i=0;i<n;i++){
        a[1][i+1]=s1[i];
        a[2][i+1]=s2[i];
       }
       int i=1;
       //ek chor kr ek k pass ye 4 option h up,down,left,right
       //we use only right,up and down options
       //and if curr at first row then two choices are there right and down 
       //if curr is at second row then two choices are there right and up
       //we choose only > and traverse until n is reached 
       for(int j=1;j<=n;j++){
        if(i==1){
                if(j==n){cout<<"YES"<<endl;break;}
                if(a[1][j+1]=='<' && a[2][j]=='<'){cout<<"NO"<<endl;break;}
                else if(a[1][j+1]=='>'){j++;}
                else if(a[2][j]=='>'){i=2;}
        }
        else if(i==2){
                if(j+1>=n){cout<<"YES"<<endl;break;}
                if(a[2][j+1]=='<' && a[1][j]=='<'){cout<<"NO"<<endl;break;}
                else if(a[2][j+1]=='>'){j++;}
                else if(a[1][j]=='>'){i=1;}
        }
       }

   }       
} 

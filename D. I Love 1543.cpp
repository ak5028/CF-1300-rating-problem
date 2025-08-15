#include <bits/stdc++.h>
using namespace std;

int main(){
        int t;cin>>t;
        while(t--){
                int n,m;cin>>n>>m;
                vector<string>a;
                for(int i=0;i<n;i++){
                        string s;cin>>s;
                        a.push_back(s);
                }
                int x1=0,y1=0,x2=n-1,y2=m-1,cnt=0; string f="1543";
                while(x1<=x2 && y1<=y2){
                        string s="";
                        for(int i=y1;i<=y2;i++){s+=a[x1][i];}
                        for(int i=x1+1;i<=x2;i++){s+=a[i][y2];}
                        for(int i=y2-1;i>=y1;i--){s+=a[x2][i];}
                        for(int i=x2-1;i>=x1+1;i--){s+=a[i][y1];}
                        s=s+s[0]+s[1]+s[2];
                        for(int i=0;i<s.length()-3;i++){
                                if(s.substr(i,4)==f){cnt++;}
                        }
                        x1++;y1++;x2--;y2--;
                }
                cout<<cnt<<endl;
        }
}

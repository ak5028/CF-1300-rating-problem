#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int mod=998244353;
int n,a[100005],b[100005],pw[100005];
int main(){
    int t;cin>>t;
    pw[0]=1;
    for(int i=1;i<100005;i++){pw[i]=pw[i-1]*2 %mod;}
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){cin>>a[i];}
        for(int i=0;i<n;i++){cin>>b[i];}
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(a[i]>a[x]){x=i;}
            if(b[i]>b[y]){y=i;}
            if(a[x]>b[y] || (a[x]==b[y] && b[i-x]>a[i-y])){
                cout<<(pw[a[x]]+pw[b[i-x]])%mod<<" ";
            }
            else{
                cout<<(pw[a[i-y]]+pw[b[y]])%mod<<" ";
            }
        }cout<<endl;
    }
}

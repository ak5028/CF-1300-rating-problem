#include <bits/stdc++.h>
using namespace std;

int l[200005],r[200005];
int a[200005],v[200005];
int main(){
        int t;cin>>t;
        while(t--){
                int n,m,k;cin>>n>>m>>k;
                for(int i=1;i<=n;i++){cin>>l[i]>>r[i];}
                for(int i=1;i<=m;i++){cin>>a[i]>>v[i];}
                priority_queue<int>q;int ans=0;bool f=true;
                for(int i=1,x=1,now=1;i<=n;i++){
                        while(x<=m && a[x]<l[i]){
                                q.push(v[x]);
                                x++;
                        }
                        while(!q.empty() && now<r[i]-l[i]+2){
                                ans++;
                                now+=q.top();
                                q.pop();
                        }
                        if(now<r[i]-l[i]+2){f=false; break;}
                }
                if(f){cout<<ans<<endl;}
                else{cout<<-1<<endl;}
        }
}

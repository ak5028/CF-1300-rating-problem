#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int test;cin>>test;
    while(test--){
        int n;cin>>n;
        int a[n+1][n+1];
        for(int i=0;i<n;i++){
            string s;cin>>s;
            for(int j=0;j<n;j++){
                a[i+1][j+1]=s[j]-'0';
            }
        }
        int ans[n+1];
        for(int i=1;i<=n;i++){
            int left=0;
            for(int j=1;j<=n;j++){
                if(i==j){continue;}
                if(a[i][j]==0){if(i<j){left++;}}
                else if(a[i][j]==1){if(i>j){left++;}}
            }
            ans[left+1]=i;
        }
        for(int i=1;i<=n;i++){cout<<ans[i]<<" ";}cout<<endl;
    }
}

{https://codeforces.com/problemset/problem/2108/B}[url]
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
    int bits=__builtin_popcountll(x);
    if (n<=bits){cout<<x;}
    else if ((n-bits)%2==0){cout<<x+n-bits;}
    else{
        if (x>1){cout<<x+n-bits+1;}
        else if (x==1){cout<<n+3;}
        else{
            if (n==1){cout<<-1;}
            else cout<<n+3;
        }
    }cout<<endl;
    }
}
    

#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,x,y,a,b,A,B;
    cin>>n>>m>>x>>y;
    A=0;
    B=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>y){A=i;break;}
    }
    if(A>0){
    for(int i=0;i<n-A;i++){
        cin>>a;
    }}
    else A=n;
    for(int i=0;i<m;i++){
        cin>>b;
        if(b>x){B=i;break;}
    }
    if(B==0){B=m;}
    cout<<A+B<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

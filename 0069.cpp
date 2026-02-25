#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    if(accumulate(a.begin(),a.end(),0)==0&&accumulate(b.begin(),b.end(),0)==0&&accumulate(c.begin(),c.end(),0)==0){cout<<"YES";}else{cout<<"NO";}
}

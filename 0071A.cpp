#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,k;
    cin>>n;
    vector<string> s(n);
    for(auto&c:s){
        cin>>c;
    }
    for(i=0;i<n;i++)if(s[i].length()<=10){cout<<s[i]<<endl;}else{k=s[i].length()-2;cout<<s[i][0]<<k<<s[i][k+1]<<endl;}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    vector<string> v(n);
    for(auto&c:v)cin>>c;
    for(int i=0;i<n;i++){
        if(v[i]=="x++"||v[i]=="++x"||v[i]=="++X"||v[i]=="X++"){x++;}else{x--;}
    }
    cout<<x;
}

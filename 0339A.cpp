#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> v((s.length()+1)/2);
    for(int i=0;i<=s.length()/2;i++){
        v[i]=s[2*i]-'0';
    }
    sort(v.begin(),v.end());
    for(int i=0;i<s.length()/2;i++){
        cout<<v[i]<<"+";
    }
    cout<<v[(s.length()-1)/2];
}

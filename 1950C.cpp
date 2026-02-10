#include<bits/stdc++.h>
using namespace std;
void solve(){
    int h,m;
    char c;
    cin>>h>>c>>m;
    if(h>=1&&h<=11){cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<" AM";}else if(h==0){cout<<"12:"<<setfill('0')<<setw(2)<<m<<" AM";}else if(h==12){cout<<"12:"<<setfill('0')<<setw(2)<<m<<" PM";}else{cout<<setfill('0')<<setw(2)<<h-12<<":"<<setfill('0')<<setw(2)<<m<<" PM";}
}
int main(){
    int t;
    cin>>t;
    while(t--){solve();cout<<endl;}
}

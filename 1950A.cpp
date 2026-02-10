#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(a<b&&b!=c){if(b<c)cout<<"STAIR";else cout<<"PEAK";}else{cout<<"NONE";}
        cout<<endl;
    }
}

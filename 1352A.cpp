#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int> r;
    int pwr=1;
    while(n>0){
        int digit=n%10;
        if(digit>0) {r.push_back(digit*pwr);}
        n=n/10;
        pwr*=10;
    }
    cout<<r.size()<<endl;
    for (int i=0;i<r.size();i++){cout<<r[i]<<" ";}
    cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t>0){
        solve();t--;
    }
}

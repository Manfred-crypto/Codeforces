#include<bits/stdc++.h>
using namespace std;
int main(){
   string s,t;
   cin>>s>>t;
   if(s==string(t.rbegin(),t.rend())){cout<<"YES";}else cout<<"NO";
}

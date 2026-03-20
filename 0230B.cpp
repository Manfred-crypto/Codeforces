#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool isPrime(long long n) {
   if(n<=1)return false;
   if(n<=3)return true;
   if(n%2==0||n%3==0)return false;
   for(int i=5; i*i<=n; i=i+6)
      if(n%i==0||n%(i+2)==0)return false;
   return true;
  //use whatever prime test you want
}
void solve(){
   long long n;
   cin>>n;
   if(isPrime(floor(sqrtl(n)))&&floor(sqrtl(n))*floor(sqrtl(n))==n)cout<<"YES"; else cout<<"NO";
   cout<<endl;
}
int main(){
   int t;
   cin>>t;
   while(t--)solve();
}

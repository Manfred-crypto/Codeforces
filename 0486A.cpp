#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n;
   cin>>n;
   cout<<((2*n+1)*(1-2*(n%2))-1)/4;
}

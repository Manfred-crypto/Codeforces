#include<bits/stdc++.h>
using namespace std;
int main(){
   double n,k;
   cin>>n>>k;
   cout<<(int)min(n,floor((sqrt(1.6*(240-k)+1)-1)/2));
}

#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> x(3);
   for(int i=0;i<3;i++){cin>>x[i];}
   sort(x.begin(),x.end());
   cout<<x[2]-x[0];
}

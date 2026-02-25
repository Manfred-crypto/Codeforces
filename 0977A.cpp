#include<bits/stdc++.h>
using namespace std;
int dec(int n){
    if(n%10==0)return n/10;else return n-1;
}
int main(){
    int n,k;
    cin>>n>>k;
    while(k--)n=dec(n);
    cout<<n;
}

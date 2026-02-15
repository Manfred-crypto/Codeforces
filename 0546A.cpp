#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k,n,w;
    cin>>k>>n>>w;
    cout<<(abs(k*w*(w+1)/2-n)-n+k*w*(w+1)/2)/2;
}

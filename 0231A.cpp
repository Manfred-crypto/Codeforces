#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    k=0;
    vector<int>a(3*n);
    for(auto&t:a)cin>>t;
    for(int i=0;i<n;i++){
        if((a[3*i]&&a[3*i+1])||(a[3*i+1]&&a[3*i+2])||(a[3*i+2]&&a[3*i])){k++;}
    }
    cout<<k;
}

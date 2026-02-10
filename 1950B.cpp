#include<bits/stdc++.h>
using namespace std;
void gastronomy(int n){
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){cout<<"##..";}cout<<endl;
        for(int j=0;j<n/2;j++){cout<<"##..";}cout<<endl;
        for(int j=0;j<n/2;j++){cout<<"..##";}cout<<endl;
        for(int j=0;j<n/2;j++){cout<<"..##";}cout<<endl;
    }
}
void astronomy(int n){
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){cout<<"##..";}cout<<"##"<<endl;
        for(int j=0;j<n/2;j++){cout<<"##..";}cout<<"##"<<endl;
        for(int j=0;j<n/2;j++){cout<<"..##";}cout<<".."<<endl;
        for(int j=0;j<n/2;j++){cout<<"..##";}cout<<".."<<endl;
    }
    for(int j=0;j<n/2;j++){cout<<"##..";}cout<<"##"<<endl;
    for(int j=0;j<n/2;j++){cout<<"##..";}cout<<"##"<<endl;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0)gastronomy(n);else astronomy(n);
    }
}

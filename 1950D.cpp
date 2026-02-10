#include<bits/stdc++.h>
using namespace std;
bool test(int n){
    if(n==1) return true;
        int bin[15]={10,11,101,111,1001,1011,1101,1111,10001,10011,10101,10111,11001,11101,11111};
    for(int b:bin) {
        if(!(n%b)) {
            if(test(n/b)) return true;
        }
    }
    return false;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(test(n)){cout<<"YES";}else{cout<<"NO";}cout<<endl;
    }
}

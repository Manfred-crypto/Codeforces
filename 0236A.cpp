#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    for(int k=0;k<25;k++){
        cin>>n;
        if(n==1){
            cout<<abs(k/5-2)+abs(k%5-2);break;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,lb;
    cin>>n>>k;
    vector<int> score(n);
    for(auto&s:score)cin>>s;
    lb=score[k-1];
    for(int i=0;i<n;i++){
        if(score[i]<lb){n=i;break;}
        if(score[i]<=0){n=i;break;}
    }
    cout<<n;
}

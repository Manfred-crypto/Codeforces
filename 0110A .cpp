#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lol=0;
    for(char c:s){if(c=='4'||c=='7')lol++;}
    string t=to_string(lol);
    bool b=0;
    for(char c:t){if(c!='4'&&c!='7'){b=1;break;}}
    if(b==0){cout<<"YES";}else{cout<<"NO";}
}

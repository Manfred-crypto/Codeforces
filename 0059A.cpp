#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>=97&&s[i]<=122)k++;
        if(2*k>=s.length())break;
    }
    if(2*k>=s.length()){for(int i=0;i<s.length();i++)cout<<(char)tolower(s[i]);}else{for(int i=0;i<s.length();i++)cout<<(char)toupper(s[i]);}
    return 0;
}

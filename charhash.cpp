#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
  //pre c
  int hash[256]={0}; 
    for(int i=0;i<s.size();i++){
        hash[s[i]]+=1;
    }
    int q;
    char c;
    cin>>q;
    while(q--){
        cin>>c;
        cout<<hash[c];
    }
}
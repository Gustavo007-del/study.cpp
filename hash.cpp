#include <bits/stdc++.h>
using namespace std;

int main() {
    int nea;
    cin >> nea;
    int arr[nea];
    for(int i=0;i<nea;i++){
        cin>>arr[i];
    }

    int hash[100]={0};
    for(int i=0;i<nea;i++){
        hash[arr[i]]+=1;
    }

    int nes;
    cin>>nes;
    while(nes--){
        int sn;
        cin>>sn;
        cout<<hash[sn];
    }
    return 0;
}
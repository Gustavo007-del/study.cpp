#include <bits/stdc++.h>
using namespace std;

int main(){
    int sa,q,n;
    cin>>sa;
    int arr[sa];
    map<int ,int>mpp;
    for(int i=0;i<sa;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    for (auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cin>>q;
    while(q--){
        cin>>n;
        cout<<mpp[n];
    }


}
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void buble(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int swapis=0;
        for(int j=i;j<n-1;j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]); 
                swapis=1;
        }
        if(swapis==0) break;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";}
            cout<<endl;
    }

}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    buble(arr , n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    //     }
}

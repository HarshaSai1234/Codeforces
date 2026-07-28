//https://codeforces.com/problemset/problem/1878/A


#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        bool present=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k){
                present=true;
            }
        }
        if(present){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }
}
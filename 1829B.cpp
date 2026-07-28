//https://codeforces.com/problemset/problem/1829/B


#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count=0;
        int max=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                count++;
                if(count>=max){
                    max=count;
                }
            }
            if(a[i]==1){
                count=0;
            }
        }
        cout<<max<<endl;
    }
}
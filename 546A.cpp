//https://codeforces.com/problemset/problem/546/A

#include <iostream>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int count=0;
    for(int i=1;i<=w;i++){
        count+=(i*k);
    }
    if(count<=n){
        cout<<0;
    }
    else{
        cout<<count-n;
    }
    return 0;
}
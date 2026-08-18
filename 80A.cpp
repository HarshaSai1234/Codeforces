//https://codeforces.com/problemset/problem/80/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    bool blackDay=true;
    for(int i=a+1;i<=b;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0) count++;
        }
        if((count==2 && i!=b) ||(i == b && count != 2)){
            blackDay=false;
            break;
        }
        
    }
    if(blackDay){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

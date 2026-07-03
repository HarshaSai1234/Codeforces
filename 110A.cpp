//https://codeforces.com/problemset/problem/110/A


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a;
    cin>>a;
    int count=0;
    while(a>0){
        if(a%10==4||a%10==7){
            count++;
        }
        a=a/10;
    }
    if(count==4||count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
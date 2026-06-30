//https://codeforces.com/problemset/problem/791/A


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    while(a<=b){
        a*=3;
        b*=2;
        count++;
    }
    cout<<count;

    return 0;
}
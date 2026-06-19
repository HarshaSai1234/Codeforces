//https://codeforces.com/problemset/problem/263/A

#include <iostream>
using namespace std;
int main(){
    int arr[5][5];
    int a=0,b=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int x;
            cin>>x;
            arr[i][j]=x;
            if(x==1){
                a=i;
                b=j;
            }
        }
    }
    cout<<abs(a-2)+abs(b-2)<<endl;
}
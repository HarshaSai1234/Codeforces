//https://codeforces.com/contest/231/problem/A

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n--){
        int oc=0;
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
            if(arr[i]==1){
                oc++;
            }
        }
        if(oc>=2){
            count++;
        }
        
    }
    cout<<count<<endl;
    return 0;
}
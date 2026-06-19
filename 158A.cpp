//https://codeforces.com/problemset/problem/158/A

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
//https://codeforces.com/problemset/problem/144/A

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxindex=0;
    int minindex=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[maxindex]){
            maxindex=i;
        }
        if(arr[i]<=arr[minindex]){
            minindex=i;
        }
    }
    int res = maxindex+(n-1-minindex);
    if (maxindex > minindex)
        res--;
    cout<<res<<endl;
}
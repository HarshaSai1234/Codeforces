//https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long tilesA = ceil((double)a/c);
    long long tilesB = ceil((double)b/c);
    long long totalTiles = tilesA*tilesB;
    cout<<totalTiles;

    return 0;
}
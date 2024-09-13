#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    int x=10, y=2;
    int p=x&y;
    int q=x|y;
    int r=x^y;
    cout<<p<<nl<<q<<nl<<r;
    return 0;
}

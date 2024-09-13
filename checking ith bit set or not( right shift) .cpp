#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int i; cin>>i;
    if(((n>>i)&1)!=0)
        cout<<"set"<<endl;
    else
        cout<<"not set"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i; cin>>n>>i;
    if((n&(1<<i))!=0)
    cout<<"set"<<endl;
    else
        cout<<"not set"<<endl;
}

#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,H,M,h,m,sum=0;
        cin>>n>>H>>M;
        ll p=H,q=M;
        ll flg=0,a=0,b=0;
        while(n--)
        {
            cin>>h>>m;
            if(h==H && m==M)
            {
                flg++;
                break;
            }
            else
            {
                /*if(p>12)
                {
                    p=p-12;
                }
                if(h>12) h=h-12;
                sum=sum+abs((p*60+q)-(h*60+m));*/
                a=a+abs(p-h);
                b=b+abs(q-m);
                p=h;
                q=m;
            }
        }
        if(flg!=0) cout<<'0'<<' '<<'0'<<nl;
        else
            cout<<p<<' '<<q<<nl;

    }
}

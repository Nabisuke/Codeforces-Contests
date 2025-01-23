#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if (a >= b)
        {
            cout<<a<<endl;
        }
        else
        {
            ll dif = b - a;
            if(dif <= a)
            {
                ll max_dif = a - dif;
                cout<<max_dif<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}
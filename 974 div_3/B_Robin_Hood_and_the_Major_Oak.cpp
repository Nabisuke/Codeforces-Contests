#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,total_leaves = 0;
        cin>>n>>k;
        if (n <=k)
        {
            total_leaves = n*(n+1)/2;
        }
        else
        {
            total_leaves = (k*(k+1)) / 2+(n-k)*k;
        }

        if(total_leaves %2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
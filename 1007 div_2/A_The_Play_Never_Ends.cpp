#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        long long k; cin>>k;
        if (k == 1) cout<<"YES"<<"\n";
        else if (k % 3 == 1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    
    return 0;
}
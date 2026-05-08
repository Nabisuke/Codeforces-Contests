#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,y,r;
        cin>>n>>y>>r;
        int remaining = n;
        remaining -= r + (y/2);
        if (remaining == 0 or remaining < 0) cout<<n<<"\n";
        else cout<<n - remaining<<"\n";
        
    }

    return 0;
}
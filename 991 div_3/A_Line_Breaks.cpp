#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int length = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {           
            int lgt = v[i].length();
            if (length + lgt > k) break;
            length += lgt;
            cnt ++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        int max = v[0];
        int min = v[n-1];
        vector<int> c(n,max);
        vector<int> b(n);
        b[0] = max;
        for(int i = 1; i < n; i++)
        {
            b[i] = min;
        }
        int score = 0;
        for (int i = 0; i< n; i++)
        {
            score += c[i] - b[i];
        }
        cout<<score<<endl;       
    }
    return 0;
}
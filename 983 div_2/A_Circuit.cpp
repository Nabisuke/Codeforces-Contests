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
        vector<int> v(2*n);
        int on = 0;
        int off = 0;
        for (int i = 0; i < 2*n; i++)
        {
            cin>>v[i];
            if (v[i] == 1) on++;
            else off++;
        }
        int max_on = min(on,off);
        int min_on;
        if (on % 2 == 0) min_on = 0;
        else min_on = 1;
        cout<<min_on<<" "<<max_on<<"\n";
    }
    return 0;
}
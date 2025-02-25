#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int cnt_1 = 0, cnt_2 = 0;
        for (int i = 0; i <n; i++)
        {
            if (s[i] == '-') cnt_1++;
            else cnt_2++;
        }

        if (cnt_1 < 2 or cnt_2 == 0)
        {
            cout<<0<<"\n";
            continue;
        }
        int first_seq = cnt_1 / 2;
        int sec_seq = cnt_1 - first_seq;
        ll result = (ll)cnt_2 * first_seq * sec_seq;
        cout<<result<<"\n";
    }
    
    return 0;
}
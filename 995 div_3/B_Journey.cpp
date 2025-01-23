#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while (t--)
    {
        ll n,a,b,c;
        cin>>n>>a>>b>>c;
        ll total = 0;
        ll cnt = 0;
        int turn = 1;
        ll sum = a + b + c;
        ll no_of_cycles = n / sum;
        total = no_of_cycles * sum;
        cnt = no_of_cycles * 3;
        while (total < n)
        {
            if (turn == 1)
            {
                total += a;
                cnt++;
                turn = 2;
            }
            else if (turn == 2)
            {
                total += b;
                cnt++;
                turn = 3;
            }
            else if (turn == 3)
            {
                total += c;
                cnt++;
                turn = 1;
            }
        }
        cout<<cnt<<"\n";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int t; cin>>t;
    
    while (t--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        if (p*n < abs(k))
        {
            cout<<-1<<"\n";
            continue;
        }
        int turn = 0;
        int total = 0;
        if (k == 0)
        {
            cout<<0<<"\n";
            continue;
        }
        while (total != k)
        {
            if (abs(k - total) <= p)
            {
                turn++;
                break;
            }
            else
            {
                if (k > total)
                {
                    total += p;
                    turn++;
                }
                else
                {
                    total -= p;
                    turn++;
                }
            }
        }

        cout<<turn<<"\n";
    }
    
    return 0;
}
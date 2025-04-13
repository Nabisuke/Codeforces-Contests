#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int l_1 = 0;
        int r_1 = 0;
        while(m != 0)
        {
            if (l_1 > l)
            {
                l_1--;
            }
            else
            {
                r_1++;
            }
            m--;
            

        }
        cout<<l_1<<" "<<r_1<<endl;
    }
    
    return 0;
}
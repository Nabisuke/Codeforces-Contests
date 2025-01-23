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
        string s;
        cin>>s;
        int n = s.length();
        int cnt_2 = 0;
        int cnt_3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 2)
            {
                cnt_2++;
            }
            else if (i == 3)
            {
                cnt_3++;
            }
        }
    }
    
    return 0;
}
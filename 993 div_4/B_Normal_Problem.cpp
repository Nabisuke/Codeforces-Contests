#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        string result;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'p') result += 'q';
            else if (s[i] == 'q') result += 'p';
            else result += 'w';
        }
        reverse(result.begin(),result.end());
        cout<<result<<"\n";
    }
    
    return 0;
}
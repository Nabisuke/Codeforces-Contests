#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;   
    while (t--)
    {
        string s;
        cin>>s;
        string result = "";
        for (int i = 0; i < s.size() - 2; i++)
        {
            result += s[i];
        }
        result += "i";       
        cout << result << endl;
    }  
    return 0;
}
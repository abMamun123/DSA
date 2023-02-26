/**
 *author:Abu Jafar Shiddik
 *created:26-02-2023(00:49:41)
 **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << n << "\n";
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp.count(s) == 0)
        {
            cout << s << " -1";
            cout << "\n";
        }
        else
        {
            cout << s << " " << i;
            cout << "\n";
        }
        mp[s] = i;
    }

    return 0;
}
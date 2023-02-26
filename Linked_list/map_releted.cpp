/**
 *author:Abu Jafar Shiddik
 *created:25-02-2023(23:52:57)
 **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, vector<int>> mp;
    for (int i = 0; i < 10; i++)
    {
        string s;
        cin >> s;
        if (mp.count(s) == 0)
            cout << s << " -1";
        else{
            
            cout << s << i;
        }    
        mp[s].push_back(i);
    }
    for (auto it : mp)
    {
        string st = it.first;
        vector<int> v = it.second;
        cout << st << "-->";
        for (int val : v)
            cout << val << " ";
        cout << "\n";
    }

    // map<int, vector<string>> mp;
    // for (int i = 0; i < 10; i++)
    // {
    //     string s;
    //     cin >> s;
    //     mp[i].push_back(s);
    // }
    // for (auto it : mp)
    // {
    //     int i = it.first;
    //     vector<string> v = it.second;
    //     cout << i << "-->";
    //     for (string val : v)
    //         cout << val << " ";
    //     cout << "\n";
    // }

    return 0;
}

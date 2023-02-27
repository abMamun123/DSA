/**
 *author:Abu Jafar Shiddik
 *created:27-02-2023(15:34:03)
 **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    list<int> l;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    // one way of printing list
    //  list<int>:: iterator it;
    //  for(it = l.begin();it!=l.end();it++)
    //  cout<<*it<<" ";
    // erase node in list
    auto it = l.begin();
    while (it != l.end())
    {
        if (*it == 0)
        {
            it = l.erase(it);
        }
        else
        {
            it++;
        }
    }
    // 2nd way of printing list
    for (auto it : l)
    {
        cout << it << " ";
    }
    return 0;
}
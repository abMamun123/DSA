#include <bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int> a)
{
    if (a.size() <= 1)
        return a;
    int p_vot = a.size() - 1;
    vector<int> b;
    vector<int> c;

    for (int i = 0; i < a.size(); i++)
    {
        if (i == p_vot)
            continue;
        else if (a[i] < a[p_vot])
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);
    vector<int> sorted_a;
    for (int i = 0; i < sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[p_vot]);
    for (int i = 0; i < sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }
    return sorted_a;
}
int main()
{
    vector<int> a = {3, 7, 9, 1, 4, 2};
    vector<int> res = quick_sort(a);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
vector<int> merge_sort(vector<int> a,int k)
{
    int sum = 0;
    if (a.size() <= 1)
        return a;
    int mid = a.size() / 2;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < mid; i++)
        b.push_back(a[i]);
    for (int i = mid; i < a.size(); i++)
        c.push_back(a[i]);
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);
    vector<int> sorted_a;
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < a.size(); i++)
    {

    }
    return sum;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for (int i = 0; i < a.size(); i++)
    {
        cin>>a[i];
    }
    vector<int> result = merge_sort(a,k);
    cout<<result.size();
    return 0;
}

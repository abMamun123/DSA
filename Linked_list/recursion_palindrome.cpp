#include <bits/stdc++.h>
using namespace std;
int check_palindrome(string s, int b, int e)
{
    if (b > e)
        return 1;
    if (s[b] != s[e])
        return -1;
    return check_palindrome(s, b + 1, e - 1);
}
int main()
{
    string str;
    cin >> str;
    int e = str.size() - 1;
    int r = check_palindrome(str, 0, e);
    if (r == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
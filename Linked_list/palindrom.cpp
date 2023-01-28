/**
 *author:xyz_123
 *created:26-01-2023(13:07:47)
 **/
// #include <bits/stdc++.h>
// using namespace std;
// // int check_palindrom(string &str)
// // {
// //     int begin = 0;
// //     int end = str.size()-1;
// //     while (end > begin)
// //     {
// //         if (str[begin] != str[end])
// //             return -1;
// //         end--;
// //         begin++;
// //     }
// //     return 1;
// // }
// int check_palindrome(string s, int b, int e)
// {
//     if (b > e)
//         return 1;
//     if (s[b] != s[e])
//         return -1;
//     return check_palindrome(s, b + 1, e - 1);
// }
// int main()
// {
//     string str;
//     cin >> str;
//     int e = str.size() - 1;
//     int r = check_palindrome(str, 0, e);
//     if (r == 1)
//         cout << "YES\n";
//     else
//         cout << "NO\n";
//     return 0;
// }


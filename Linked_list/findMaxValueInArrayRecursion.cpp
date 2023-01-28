#include <bits/stdc++.h>
using namespace std;
int findMax(int A[], int n)
{
    if (n == 1)
        return A[0];
    return max(A[n - 1], findMax(A, n - 1));
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << findMax(A, n);
    return 0;
}

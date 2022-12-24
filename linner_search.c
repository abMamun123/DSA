#include <stdio.h>
int main()
{
    solved();
    return 0;
}

void solved()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int m;
    scanf("%d", &m);
    int item = linner_search(arr, n, m);
    if (item == 1)
        printf("%d found in array list", m);
    else
        printf("%d not found in array list", m);
}

int linner_search(int arr[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
            return 1;
    }
    return -1;
}
#include <stdio.h>
void print(int arr[], int n)
{
    printf("\nsorted values: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void input()
{
    int n;
    printf("number of inputs: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nInput values: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    insertion_sort(arr, n);
}
void insertion_sort(int arr[], int n)
{
    int i, j, value;
    for (i = 1; i < n; i++)
    {
        value = arr[i];
        while (i > 0 && arr[i - 1] > value)
        {
            arr[i] = arr[i - 1];
            i--;
        }
        arr[i] = value;
    }
    print(arr, n);
    printf("\nInput Search Item:");
    int item;
    scanf("%d", &item);
    binary_search(arr, n, item);
}
void binary_search(int arr[], int n, int item)
{
    int left = 0, right = n - 1, middle;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (arr[middle] == item)
        {
            printf("search item %d found in index %d\n", item, middle);
            break;
        }
        else if (arr[middle] < item)
            left + 1;

        else if (arr[middle] > item)
            right - 1;
    }
    printf("search item %d not found in array", item);
}
int main()
{
    input();
    return 0;
}
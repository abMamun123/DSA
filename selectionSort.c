#include <stdio.h>
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void input()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubble_sort(arr, n);
}
void bubble_sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        int min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    print(arr, n);
}
int main()
{
    input();
    return 0;
}
#include <stdio.h>
void take_element()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubble_sort(arr, n);
}

int bubble_sort(int arr[], int n)
{
    int i, j, temp, flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag = 0)
            break;
    }
    print_element(arr, n);
}
void print_element(int arr[], int n)
{
    // print the sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
int main()
{
    take_element();
    return 0;
}

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
        printf("Iteration->%d ", i);
        printf("\n");
        for (j = 0; j < n - i - 1; j++)
        {
            printf("step-%d: ", j);
            print_element(arr, n);
            printf("->");
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
            print_element(arr, n);
            printf("\n");
        }
        if (flag = 0)
            break;
    }
}
void print_element(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    take_element();
    return 0;
}

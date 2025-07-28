#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int new_arr[n];

    for (int i = 0; i < n; i++)
    {
        new_arr[i] = arr[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", new_arr[i]);
    }

    return 0;
}
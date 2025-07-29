#include <stdio.h>

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int leader = arr[n - 1];
    printf("%d ", leader);

    for (int i = n - 2; i >= 0; i--)
    {
        if (leader <= arr[i])
        {
            leader = arr[i];
            printf("%d ", leader);
        }
    }

    return 0;
}
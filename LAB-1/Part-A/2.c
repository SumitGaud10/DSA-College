#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int odd = 0, even = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
            odd++;
        else
            even++;
    }
    printf("There are %d odd and %d even numbers in the array", odd, even);
}
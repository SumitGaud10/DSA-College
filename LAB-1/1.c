#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length_of_arr = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    int min = arr[0];
    for (int i = 0; i < length_of_arr; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Max is: %d", max);
    printf("Min is: %d", min);
    return 0;
}
#include <stdio.h>

int main()
{
    int arr[] = {6, 4, 8, 3, 0, 5, 7, 3, 2, 5, 6, 4, 7, 5, 3};

    // b. Finding the length of the array
    int length = sizeof(arr) / sizeof(arr[0]);

    // a. Transverse
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // c. Searching an element in the array
    int element = 4;
    int found = 0;
    for (int i = 0; i < length; i++)
    {
        if (element == arr[i])
        {
            printf("Found element %d on index %d\n", element, i);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("Specified element is not present in the array\n");
    }

    // d. Finding the largest element
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Largest value is %d\n", max);

    // e. Finding the smallest element
    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Smallest value is %d\n", min);

    // f. Insert an element at a given position in the array.
    int position_a = 5;
    int element_a = 1;
    for (int i = length; i > position_a; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position_a] = element_a;
    length++;

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // g. Delete an element from a given position in the array.
    int position_b = 5;
    for (int i = position_b; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    length--;

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // h. Searching an element in the array with linear search
    // It's the same as C because I've used linear search in C too

    return 0;
}
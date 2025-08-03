#include <stdio.h>

int main()
{
    int arr[3][3][3];
    int search, found = 0;

    printf("Enter elements for a 3x3x3 array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("arr[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("\nEnter element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[i][j][k] == search)
                {
                    printf("Element %d found at Layer %d, Row %d, Column %d\n",
                           search, i + 1, j + 1, k + 1);
                    found = 1;
                }
            }
        }
    }

    if (!found)
    {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int arr[2][2][2];
    int sum = 0;

    printf("Enter elements for a 2x2x2 array:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("arr[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
                sum += arr[i][j][k];
            }
        }
    }

    printf("\nThe sum of all elements in the 3D array = %d\n", sum);

    return 0;
}

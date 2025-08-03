#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int A[m][n];

    printf("Enter elements of Matrix A (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    int found = 0;

    for (int i = 0; i < m; i++)
    {
        int minRow = A[i][0];
        int colIndex = 0;
        for (int j = 1; j < n; j++)
        {
            if (A[i][j] < minRow)
            {
                minRow = A[i][j];
                colIndex = j;
            }
        }

        int isSaddle = 1;
        for (int k = 0; k < m; k++)
        {
            if (A[k][colIndex] > minRow)
            {
                isSaddle = 0;
                break;
            }
        }

        if (isSaddle)
        {
            printf("Saddle point found at A[%d][%d] = %d\n", i + 1, colIndex + 1, minRow);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No saddle points found in the matrix.\n");
    }

    return 0;
}

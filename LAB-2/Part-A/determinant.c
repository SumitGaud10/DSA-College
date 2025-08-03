#include <stdio.h>

int main()
{
    int A[2][2];
    int det;

    printf("Enter elements of 2x2 Matrix A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

    printf("\nMatrix A:\n");
    printf("%d %d\n", A[0][0], A[0][1]);
    printf("%d %d\n", A[1][0], A[1][1]);

    printf("\nDeterminant of A = %d\n", det);

    return 0;
}

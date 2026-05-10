#include <stdio.h>

int main()
{
    int i, j, k;
    int m, n, p, q;
    int A[10][10], B[10][10], C[10][10];

    // Input order of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);

    // Input order of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &p, &q);

    // Check multiplication condition
    if (n != p)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("Product of matrices:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}




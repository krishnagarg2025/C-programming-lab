#include <stdio.h>
int main()
{
    int mat1[100][100], mat2[100][100], i, j, n, m, o, p, sum[100][100];
    printf("Enter the no of rows and column for first matrix\n");
    scanf("%d", &m);
    scanf("%d", &n);
    printf("enter elements\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("First matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the no of rows and column for second matrix\n");
    scanf("%d%d", &o, &p);
    printf("enter elements\n");
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("second matrix\n");
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("Addition");
    if (m == o && n == p)
    {
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                sum[i][j] = mat1[i][j] - mat2[1][j];
            }
        }
        printf("After addition\n");
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid order\n");
    }

    return 0;
}
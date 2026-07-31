#include <stdio.h>
int main()
{
    int mat1[100][100], mat2[100][100], i, j, n, m, o, p, k,multi[100][100],product=0;
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
    if(n==o){
        for ( i = 0; i < m; i++)
        {
           for ( j = 0; j < p; j++)
           {
           for ( k = 0; k < n; k++)
           {
            multi[i][j]+=mat1[i][k]*mat2[k][j];
           }
           
         }  
        }
        printf("Multiplied matrix:\n");
        for ( i = 0; i < m; i++)
        {
           for ( j = 0; j < p; j++)
           {
            printf("%d ",multi[i][j]);
           }
           printf("\n");
           
        }
        
    }

    else{
        printf("Invalid order cant multiply\n");
    }

    return 0;
}
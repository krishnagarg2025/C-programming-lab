#include <stdio.h>
int main()
{
    int i, n,m,arr2[100], arr[100], merge[200];
    printf("Enter the number of elements in first array:\n");
    scanf("%d", &n);
    printf("Enter the elements in first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };
    printf("Given first array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    };
    printf("Enter the number of elements in second array:\n");
    scanf("%d", &m);
    printf("Enter the elements in second array:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    };
    printf("Given second array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr2[i]);
    };
    for (i = 0; i < n; i++)
    {
        merge[i]= arr[i];
    }
    for(i=0;i<m;i++){
        merge[n+i]=arr2[i];
    }
    printf("Merged array is given as:\n");
    for (i = 0; i < n+m; i++)
    {
        printf("%d\n", merge[i]);
    };
    
}
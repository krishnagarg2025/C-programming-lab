#include <stdio.h>
int main(){
    int i,n,pos,arr[100];
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements in array:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    };
    printf("Given array is:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    };
    printf("Enter the position of element to delete:\n");
    scanf("%d",&pos);
    if (pos-1<0 | pos-1>n)
    {
        printf("Invalid Position\n");
    }
    else{
        for ( i = pos-1; i < n-1; i++)
        {
            arr[i]= arr[i+1];
        }
        n= n-1;
        printf("Updated array is:\n");
        for ( i = 0; i < n; i++)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
    
}
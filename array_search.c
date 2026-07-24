#include <stdio.h>
int main()
{
    int i, n, key, arr[100], found=0;
    printf("Enter the number of elements in array:\n");
    scanf("%d", &n);
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };
    printf("Given array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    };
    printf("Enter the element to search:\n");
    scanf("%d",&key);
    for (i = 0; i < n; i++)
    {
        if(arr[i]==key){
            found=1;
            printf("%d found at %d\n",key,i+1);
            break;
        }
    };
    if(found ==0){
        printf("%d not found in the array\n",key);
    }
    
    
}
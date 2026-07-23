#include <stdio.h>
int main(){
    int arr[20],n,pos,item,i;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for ( i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for ( i = 0; i < n; i++){
       printf("%d\n",arr[i]);
    }
    printf("Enter the position of element: ");
    scanf("%d",&pos);
    printf("Enter the element: ");
    scanf("%d",&item);

    for ( i = n; i >=pos; i--)
    {
      arr[i] = arr[i-1];
    }
    arr[pos-1]= item;
    n++;
    printf("Updated array elements are:\n");
    for ( i = 0; i < n; i++){
       printf("%d\n",arr[i]);
    }
    
    return 0;
}

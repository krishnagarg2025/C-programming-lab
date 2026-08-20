#include <stdio.h>

int main() {
    int min,j,i,n,temp,arr[100];
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
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
    printf("Sorted array is :\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    };
    
    
    return 0;
}

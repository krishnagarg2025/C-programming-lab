#include <stdio.h>
int main(){
    int arr[100],key,n,flag=0,i;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Given array is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("Enter the key to search:\n");
    scanf("%d",&key);
    // Searching elements
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at index %d\n",arr[i]);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Element not found\n");
    }


}
#include <stdio.h>
int main()
{
    int arr[100], key, l=0,r, i,n,mid;
    printf("Enter the number of elements in array:\n");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Given array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Enter the key to search:\n");
    scanf("%d", &key);
    // Searching elements
   r= n-1;
   while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==key){
            printf("Element found at index %d",mid);
            break;
        }
        else if(arr[mid]>key){
            r= mid-1;
        }
        else{
            l= mid+1;
        }
   }
}
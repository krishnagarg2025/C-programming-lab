#include <stdio.h>

int partition(int a[], int p, int q) {
    int x = a[p], i = p, j, temp;
    for (j = p + 1; j <= q; j++) {
        if (a[j] <= x) {
            i = i + 1;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i];
    a[i] = a[p];
    a[p] = temp;
    return i;
}

void quick_sort(int a[], int p, int q) {
    int m;
    if (p < q) {
        m = partition(a, p, q);
        quick_sort(a, p, m - 1);
        quick_sort(a, m + 1, q);
    }
}

int main() {
    int i, n, arr[100];
    printf("Enter the number of elements in array:\n");
    scanf("%d", &n)
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++) {
    scanf("%d", &arr[i])
    }
    printf("Given array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    int p = 0, r = n - 1;
    quick_sort(arr, p, r);
    printf("Sorted array is :\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

#include <stdio.h>
#include <limits.h> 

void merge(int a[], int p, int q, int r) {
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;
    int l[105], r_arr[105]; 
    for (i = 1; i < n1 + 1; i++) {
        l[i] = a[p + i - 1];
    }
    for (j = 1; j < n2 + 1; j++) {
        r_arr[j] = a[q + j];
    }

    l[n1 + 1] = INT_MAX; 
    r_arr[n2 + 1] = INT_MAX;

    i = 1;
    j = 1;
    for (k = p; k <= r; k++) {
        if (l[i] <= r_arr[j]) {
            a[k] = l[i];
            i = i + 1;
        } else {
            a[k] = r_arr[j];
            j = j + 1;
        }
    }
}

void merge_sort(int a[], int p, int r) {
    int q;
    if (p < r) {
        q = (p + r) / 2;
        merge_sort(a, p, q);
        merge_sort(a, q + 1, r);
        merge(a, p, q, r);
    }
}

int main() {
    int i, n, arr[100];
    
    printf("Enter the number of elements in array:\n");
    scanf("%d", &n)

    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Given array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    int p = 0, r = n - 1;
    merge_sort(arr, p, r);

    printf("Sorted array is :\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

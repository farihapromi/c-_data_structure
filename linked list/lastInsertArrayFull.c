#include <stdio.h>
#include <stdlib.h>

int add_at_end(int a[], int b[], int n, int freepos, int data);

int main() {
    int a[3];
    int i, n, freepos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int size = sizeof(a) / sizeof(a[0]);
    freepos = n;

    if (n == size) {
        int b[size + 1];  // Increase the size by 1 to accommodate the new element

        freepos = add_at_end(a, b, size, freepos, 6);
    } else {
        freepos = add_at_end(a, a, size, freepos, 6);  // Just add the element to the original array
    }

    for (i = 0; i < freepos; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}

int add_at_end(int a[], int b[], int n, int freepos, int data) {
    int i;

    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }

    b[freepos] = data;
    freepos++;

    return freepos;
}

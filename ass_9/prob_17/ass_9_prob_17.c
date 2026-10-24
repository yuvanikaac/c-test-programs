#include <stdio.h>

int main() {
    int arr[100], n, i, carry;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements (can contain 2-digit numbers):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    carry = 0;
    for (i = n - 1; i >= 0; i--) {
        arr[i] += carry;
        carry = arr[i] / 10;
        arr[i] = arr[i] % 10;
    }
    printf("The adjusted array is:\n");
    if (carry > 0) {
        printf("%d ", carry);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int strictly_even = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && i % 2 != 0) {
            strictly_even = 0;
            break;
        }
    }

    if (strictly_even) {
        printf("True
");
    } else {
        printf("False
");
    }

    return 0;
}

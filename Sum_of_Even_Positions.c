#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int even = 0;

    for (int i = 0; i < n; i += 2) {
        even += arr[i];
    }

    printf("%d
", even);

    return 0;
}
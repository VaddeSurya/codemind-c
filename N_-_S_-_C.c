#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a,&b);
    for (int i = a + 1; i <= b - 1; i++) {
        int square = i * i;
        int cube = i * i * i;
        printf("%d %d %d
", i, square, cube);
    }

    return 0;
}

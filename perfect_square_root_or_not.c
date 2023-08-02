#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    if (num <= 0) {
        return 0;
    }

    int root = (int)sqrt(num);
    int ans = root * root;

    return ans == num;
}

int main() {
    int num;
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}

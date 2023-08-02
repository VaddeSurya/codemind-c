#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}
int main() {
    int num;
    scanf("%d", &num);
    if (isPalindrome(num)) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}

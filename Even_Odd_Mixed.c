#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int allEven = 1;
    int allOdd = 1;
    int originalNum = num;
    
    while (num != 0) {
        int digit = num % 10;
        
        if (digit % 2 == 0) {
            allOdd = 0; 
        } else {
            allEven = 0; 
        }
        
        num /= 10;
    }
    
    if (allEven) {
        printf("Even");
    } else if (allOdd) {
        printf("Odd");
    } else {
        printf("Mixed");
    }
    
    return 0;
}

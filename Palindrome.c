#include <stdio.h>
int main()
{
     int n, num, digit, rev = 0;
     scanf("%d",&num);
     n = num;
     while(num>0)
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     }
     if (n == rev)
         printf("True");
     else
         printf("False");
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[100], i, j, max = 0, c = 0, f = 0, k;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max) 
        {
            max = a[i];
        }
    }

    for (k = 1; k <= max + 1; k++)
    {
        c = 0;
        for (j = 0; j < n; j++) // Use j instead of i here
        {
            if (k != a[j])
            {
                c += 1;
            }
        }
        if (c == n)
        {
            printf("%d", k);
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("%d", (max + 1));
    }
    return 0; 
}

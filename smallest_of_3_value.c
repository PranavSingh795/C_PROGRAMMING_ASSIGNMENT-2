#include <stdio.h>
int main() 
    {
    int a, b, c;
    printf("Enter three number\n ");
    scanf("%d %d %d", &a, &b, &c);
        if (a <= b && a <= c)
        {
            printf("smallest number is %d\n", a);
        }
        else if (b <= a && b <= c) 
        {
            printf("smallest number is %d\n", b);
        }
        else 
        {
            printf("smallest is %d\n", c);
        }
return 0;
    }

#include <stdio.h>

int main() {
    int number[5];
    int pos,neg,zero;
    int i;
    
    pos=0;
    neg=0;
    zero=0;
    printf("Enter 100 integer numbers:\n");

   
    printf("Enter number 1: ");
    scanf("%d", &number[0]);
    if (number[0]>0)
    {
        pos=pos+1;
    }
    else if(number[0]<0)
    {
        neg=neg+1;
    }
    else
    {
        zero=zero+1;
    }

    
    for (i = 1; i < 100; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);

        if (number[i] > 0) {
            pos=pos+1;
        }

        else if (number[i] < 0)
        {
            neg=neg+1;
        }
        else
        {
            zero=zero+1;
        }
    }

    printf("\npoitive: %d\n", pos);
    printf("negative %d\n", neg);
    printf("zero %d\n", zero);

    return 0;
}

#include <stdio.h>
int main() 
    {
    float net,gross;
    printf("Enter gross sales:\n ");
    scanf("%f", &gross);
        if (gross>20000)
        {
            net=(gross-(gross*0.15));
            printf("net sales are  %f\n", net);
        }
        else if (gross>10000) 
        {
            net=(gross-(gross*0.1));
            printf("net sales are  %f\n", net);
        }
        else 
        {
            net=(gross-(gross*0.05));
            printf("net sales are  %f\n", net);
        }
return 0;
    }

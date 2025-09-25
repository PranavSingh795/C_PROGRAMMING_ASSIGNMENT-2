#include <stdio.h>
int main() 
    {
        int n;
        printf("enter any number:\t");
        scanf("%d",&n);
    int i = 1;
    int sum=1;
    for(i=1;i<=n;i++)
    {
       sum=sum*i;
    }
     printf("factorial is %d\t",sum);
return 0;
    }

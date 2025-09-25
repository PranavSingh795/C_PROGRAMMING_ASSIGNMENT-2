#include <stdio.h>
int main() 
    {
        int n;
        printf("enter any number:\t");
        scanf("%d",&n);
    int i = 1;
    int sum=0;
    for(i=1;i<=n;i++)
    {
       sum+=i;
    }
     printf("%d\t",sum);
return 0;
    }

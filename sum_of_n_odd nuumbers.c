#include <stdio.h>
int main() 
    {
        int n;
        printf("enter any number:\t");
        scanf("%d",&n);
    int i = 0;
    int sum=0;
    for(i=0;i<n;i++)
    {
       sum+=2*i+1;
    }
     printf("%d\t",sum);
return 0;
    }

#include <stdio.h>
int main() 
    {
        int n;
        float mean;
        printf("enter any number:\t");
        scanf("%d",&n);
    int i = 1;
    int sum=0;
    int t;
    for(i=1;i<=n;i++)
    {
        printf("enter number");
        scanf("%d",&t);
        sum+=t;
        mean=sum/i;
    }
   
     printf("sum total is %d\t",sum);
     printf("average or mean is %f\t",mean);
return 0;
    }

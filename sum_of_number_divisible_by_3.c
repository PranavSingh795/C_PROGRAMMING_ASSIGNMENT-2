#include <stdio.h>

int main() {
   int sum,i;
   i=1;
   sum=0;
   for(i=0;i<=100;i++)
   {
       if(i%3==0)
       {
           sum+=i;
       }
   }
    printf("the sum is: %d",sum);
    return 0;
}

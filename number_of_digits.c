#include<stdio.h>

int main()
{
    int num;
    int c;
    c=0;
    printf("enter a number\t");
    scanf("%d",&num);
    
    while(num > 0) 
    {
        int mod = num % 10; 
        c=c+1;
    
        num = num / 10;   
    }
     printf("%d",c);
    return 0;
}

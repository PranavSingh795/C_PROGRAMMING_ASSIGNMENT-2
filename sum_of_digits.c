#include<stdio.h>

int main()
{
    int d,num;
    printf("enter a number\t");
    scanf("%d",&num);
    d=0;
    while(num > 0) 
    {
        int mod = num % 10; 
        d=d+mod;
    
        num = num / 10;   
    }
    printf("%d\n",d); 
    return 0;
}

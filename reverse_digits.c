#include<stdio.h>

int main()
{
    int num;
    printf("enter a number\t");
    scanf("%d",&num);
    
    while(num > 0) 
    {
        int mod = num % 10; 
        printf("%d",mod); 
    
        num = num / 10;   
    }
    
    return 0;
}

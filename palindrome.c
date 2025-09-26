#include<stdio.h>

int main()
{
    int num,ans,hehe;
    printf("enter a number\t");
    scanf("%d",&num);
    ans=0;
    hehe=num;
    while(num > 0) 
    {
        int mod = num % 10; 
        printf("%d",mod); 
        ans = ans * 10 + mod;
        num = num / 10;   
    }
    if(ans==hehe)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not a palindrome");
    }
    return 0;
}

#include <stdio.h>
int main() 
    {
    float avg,total,s1,s2,s3;
    printf("Enter marks of 1 subject:\n ");
    scanf("%f", &s1);
    printf("Enter marks of 2nd subject:\n ");
    scanf("%f", &s2);
    printf("Enter marks of 3rd subject:\n ");
    scanf("%f", &s3);
    total=s1+s2+s3;
    avg=total/3.0;
        if (avg>=70)
        {
            printf("distinction");
        }
        else if (avg>=70) 
        {
             printf("first class");
        }
         else if (avg>=60) 
        {
             printf("first class");
        } else if (avg>=50) 
        {
             printf("first class");
        } else if (avg>=35) 
        {
             printf("first class");
        }
        else 
        {
             printf("fail");
        }
return 0;
    }

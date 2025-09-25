#include<stdio.h>
    int main()
    
    {
        float net,salary;
        printf("Enter your salary:\n");
        scanf("%f",&salary);
        if(salary>10000)
        {
            net=(salary +(salary*0.1)-(salary*0.03));
            printf("Your net salary is %f\n",net);
        }
        else if(salary>5000)
        {
            net=(salary +(salary*0.07)-(salary*0.02));
            printf("Your net salary is %f\n",net);
        }
        else
        {
            net=salary;
            printf("Youre net salary is %f\n",net);
        }
        return 0;
    }

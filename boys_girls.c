#include <stdio.h>

int main() {
    char sex;
    int boys = 0, girls = 0, i;

    printf("Enter sex (M/F) for 50 students:\n");
    for(i = 0; i < 50; i++)
    {
        printf("Student %d: ", i + 1);
        scanf(" %c", &sex); 

        if(sex == 'M' || sex == 'm')
            boys++;
        else if(sex == 'F' || sex == 'f')
            girls++;
    }

    printf(" boys: %d\n", boys);
    printf(" girls: %d\n", girls);

    return 0;
}

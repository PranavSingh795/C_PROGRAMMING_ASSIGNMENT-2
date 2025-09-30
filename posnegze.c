#include <stdio.h>

int main() {
    int numbers[200];
    int i;
    int positive = 0, negative = 0, zero = 0;
    printf("Enter 200 integers:\n");
    for(i = 0; i < 200; i++) {
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < 200; i++) {
        if(numbers[i] > 0)
            positive++;
        else if(numbers[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive  %d\n", positive);
    printf("Negative  %d\n", negative);
    printf("Zeroes: %d\n", zero);

    return 0;
}

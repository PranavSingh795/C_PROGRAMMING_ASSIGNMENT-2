#include <stdio.h>

int main() {
    int number[100];
    int largest, smallest;
    int i;

    printf("Enter 100 integer numbers:\n");

   
    printf("Enter number 1: ");
    scanf("%d", &number[0]);
    largest = number[0];
    smallest = number[0];

    
    for (i = 1; i < 100; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);

        if (number[i] > largest) {
            largest = number[i];
        }

        if (number[i] < smallest) {
            smallest = number[i];
        }
    }

    printf("\nLargest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}

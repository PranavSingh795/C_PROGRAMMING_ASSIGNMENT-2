#include <stdio.h>
#include <math.h>

int main() {
    int num, square, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;
    while (temp > 0) {
        if (square % 10 != temp % 10) {
            printf("%d is not an automorphic number.\n", num);
            return 0;
        }
        square /= 10;
        temp /= 10;
    }
    printf("%d is an automorphic number.\n", num);
    return 0;
}

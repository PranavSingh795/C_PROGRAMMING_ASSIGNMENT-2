#include <stdio.h>

int main() {
    int n;
    printf("enter no:");
    scanf("%d",&n);
    char name[] = "pranav"; 

    for (int i = 0; i < n; i++) {
        printf("%s\n", name);
    }

    return 0;
}

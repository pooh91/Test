#include <stdio.h>

void big3() {
    int a, b, c;
    printf("Enter three numbers to find the biggest: ");
    scanf("%d %d %d", &a, &b, &c);

    int biggest = a;
    if (b > biggest)
        biggest = b;
    if (c > biggest)
        biggest = c;

    printf("The biggest number is %d\n", biggest);
}


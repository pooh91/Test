#include <stdio.h>

void big2() {
    int a, b;
    printf("Enter two numbers for big2: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is greater\n", a);
    else if (b > a)
        printf("%d is greater\n", b);
    else
        printf("Both numbers are equal\n");
}


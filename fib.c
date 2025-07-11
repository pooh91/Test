#include <stdio.h>

void fibonacci() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}


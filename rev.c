#include <stdio.h>
#include <string.h>

void reverse() {
    char str[1000];
    printf("Enter a string to reverse: ");
    scanf("%s", str);

    int len = strlen(str);
    printf("String before reverse: %s\n", str);
    printf("String after reverse: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}


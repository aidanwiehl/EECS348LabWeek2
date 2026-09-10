#include "isEven.h"
#include "isOdd.h"

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (isOdd(num)) {
        printf("%d is odd.\n", num);
    } else if (isEven(num)) {
        printf("%d is even.\n", num);
    }

    return 0;
}

#include <stdio.h>

int main(void) {
    int num;
    int *ptr;
    int **pptr;

    printf("Enter an integer value: ");
    scanf("%d", &num);

    ptr = &num;
    pptr = &ptr;

    printf("\nValue of num (direct)       = %d\n", num);
    printf("Value of num via ptr (*ptr) = %d\n", *ptr);
    printf("Value via pptr (**pptr)     = %d\n", **pptr);

    printf("\nAddress of num              = %p\n", (void *)&num);
    printf("Value stored in ptr         = %p\n", (void *)ptr);
    printf("Address of ptr (&ptr)       = %p\n", (void *)&ptr);
    printf("Value stored in pptr        = %p\n", (void *)pptr);

    return 0;
}

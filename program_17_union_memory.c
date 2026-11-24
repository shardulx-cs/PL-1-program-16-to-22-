#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main(void) {
    union Data data;

    printf("Size of union Data = %zu bytes\n", sizeof(data));

    data.i = 65;
    printf("\nAfter assigning integer:\n");
    printf("data.i = %d\n", data.i);
    printf("Address of data.i = %p\n", (void *)&data.i);

    data.f = 3.14f;
    printf("\nAfter assigning float:\n");
    printf("data.f = %.2f\n", data.f);
    printf("Address of data.f = %p\n", (void *)&data.f);

    data.c = 'A';
    printf("\nAfter assigning character:\n");
    printf("data.c = %c\n", data.c);
    printf("Address of data.c = %p\n", (void *)&data.c);

    printf("\nAll union members share the same starting memory address.\n");
    return 0;
}

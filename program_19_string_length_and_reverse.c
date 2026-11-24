#include <stdio.h>

int main(void) {
    char str[100];
    int length = 0, i;

    printf("Enter a string (no spaces): ");
    scanf("%99s", str);

    /* Find length without using strlen(). */
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string = %d\n", length);

    printf("Reversed string = ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

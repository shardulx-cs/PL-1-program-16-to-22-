#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[200], str2[100], copyStr[100], reversed[100];
    int result, i, len;

    printf("Enter first string (no spaces): ");
    scanf("%99s", str1);

    printf("Enter second string (no spaces): ");
    scanf("%99s", str2);

    /* 1. Copy one string into another. */
    strcpy(copyStr, str1);
    printf("\nCopied string      : %s\n", copyStr);

    /* 2. Reverse a copy of the first string (portable C). */
    len = (int)strlen(str1);
    strcpy(reversed, str1);
    for (i = 0; i < len / 2; i++) {
        char temp = reversed[i];
        reversed[i] = reversed[len - 1 - i];
        reversed[len - 1 - i] = temp;
    }
    printf("Reversed string    : %s\n", reversed);

    /* 3. Find string length. */
    printf("Length of str1     : %d\n", len);

    /* 4. Compare two strings. */
    result = strcmp(str1, str2);
    if (result == 0) {
        printf("Comparison result  : strings are equal\n");
    } else if (result < 0) {
        printf("Comparison result  : str1 is less than str2\n");
    } else {
        printf("Comparison result  : str1 is greater than str2\n");
    }

    /* 5. Concatenate str2 to str1. */
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}

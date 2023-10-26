#include <stdio.h>
#include <stdlib.h>

int main() {
    char* str1 = (char*)malloc(sizeof(char) * 10);

    fgets(str1, 10, stdin);

    int i = 0;
    while (str1[i] != '\0') {
        ++i;
    }

    printf("%d\n", i - 1);

    free(str1);
    return 0;
}
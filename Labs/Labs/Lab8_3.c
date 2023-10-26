#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* str1 = (char*)malloc(sizeof(char) * 10);
    char* str2 = (char*)malloc(sizeof(char) * 10);

    fgets(str1, 10, stdin);
    fgets(str2, 10, stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int i = 0, j = 0;

    while (str1[i] != '\0') {
        ++i;
    }

    while (str2[j] != '\0') {
        ++j;
    }

    for (int k = 0; k < i; ++k) {
        if (str1[k] != str2[k]) {
            printf("%s", "NO");
            return 0;
        }
    }

    free(str1);
    free(str2);

    printf("%s", i == j ? "YES" : "NO");

    return 0;
}
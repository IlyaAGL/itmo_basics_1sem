#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* str1 = (char*)malloc(sizeof(char) * 10);
    char* str2 = (char*)malloc(sizeof(char) * 10);
    char* str3 = (char*)malloc(sizeof(char) * (10 + 10 + 1));
    int i = 0, j = 0;
    fgets(str1, 10, stdin);
    fgets(str2, 10, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    while (str1[i] != '\0') {
        str3[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        str3[i] = str2[j];
        ++i;
        ++j;
    }

    str3[i] = '\0';
    printf("%s", str3);

    free(str1);
    free(str2);
    free(str3);

    return 0;
}
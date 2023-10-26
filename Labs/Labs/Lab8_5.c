#include <stdio.h>
#include <stdlib.h>

int main() {
    char* str1 = (char*)malloc(sizeof(char) * 10);
    char* str2 = (char*)malloc(sizeof(char) * 10);

    fgets(str1, 10, stdin);
    //scanf("%s", str2);

    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        ++i;
    }
    str2[i] = '\0';
    printf("%s\n", str2);

    free(str1);
    free(str2);

    return 0;
}
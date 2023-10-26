#include <stdio.h>
#include <stdlib.h>

int main() {
    char* str1 = (char*)malloc(sizeof(char) * 10);
    char find;
    fgets(str1, 10, stdin);
    scanf("%c", &find);

    int i = 0;
    while (str1[i] != '\0') {
        ++i;
    }
    str1[i] = '\0';

    for (int j = i - 1; j >= 0; --j) {
        if (str1[j] == find) {
            printf("%d", j);
            return 0;
        }
    }

    free(str1);
    printf("%s", "No such character");
    return 0;
}
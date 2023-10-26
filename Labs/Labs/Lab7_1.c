#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n = 1;
    char** arr = (char**)malloc(sizeof(char*) * 7);

    for (int i = 0; i < 7; ++i) {
        arr[i] = (char*)malloc(sizeof(char) * 20);
        scanf_s("%s", arr[i]);
    }

    printf("%s", arr[n - 1]);

    for (int i = 0; i < 7; ++i) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
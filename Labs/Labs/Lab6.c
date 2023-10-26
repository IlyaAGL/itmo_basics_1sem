#include <stdio.h>
#include <malloc.h>


int main() {
    char* arr = (char*)malloc(sizeof(char) * 4);

    for (int i = 0; i < 4; ++i) {
        scanf_s(" %c", &arr[i]);
    }

    for (int i = 0; i < 4; ++i) {
        printf("%c ", arr[i]);
    }

    free(arr);

    return 0;
}
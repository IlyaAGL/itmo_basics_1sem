#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1
    int* arr = (int*)malloc(sizeof(int) * 7);

    for (int i = 0; i < 7; ++i) {
        scanf_s("%d", &arr[i]);
    }

    printf("\n");
    for (int i = 0; i < 7; ++i) {
        printf("%d ", arr[i]);
    }

    free(arr);

    // 2


    int** first = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < 2; ++i) {
        first[i] = (int*)malloc(sizeof(int) * 2);
    }

    int** second = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < 2; ++i) {
        second[i] = (int*)malloc(sizeof(int) * 2);
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf("%d", &first[i][j]);
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf("%d", &second[i][j]);
        }
    }

    int** res = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < 2; ++i) {
        res[i] = (int*)malloc(sizeof(int) * 2);
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            int summ = 0;
            for (int k = 0; k < 2; ++k) {
                summ += first[i][k] * second[k][j];
            }
            res[i][j] = summ;
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
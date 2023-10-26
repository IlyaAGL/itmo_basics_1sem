#include <stdio.h>
#include <stdlib.h>

int main() {
    char uppercase[26];
    int up = 0;
    char lowercase[26];
    int low = 0;
    char digs[10];
    int dig = 0;

    for (int i = 0; i < 26; i++) {
        uppercase[i] = 'A' + i;
    }

    for (int i = 0; i < 26; i++) {
        lowercase[i] = 'a' + i;
    }

    for (int i = 0; i < 10; i++) {
        digs[i] = '0' + i;
    }

    char* str1 = (char*)malloc(sizeof(char) * 100);

    fgets(str1, 100, stdin);

    int k = 0;
    while (str1[k] != '\0') {
        ++k;
    }

    for (int ind = 0; ind < k; ++ind) {
        for (int j = 0; j < 26; ++j) {
            if (str1[ind] == uppercase[j]) {
                ++up;
            }
            if (str1[ind] == lowercase[j]) {
                ++low;
            }
        }
        for (int j = 0; j < 10; ++j) {
            if (str1[ind] == digs[j]) {
                ++dig;
            }
        }
    }

    printf("Строчных - %d\n", up);
    printf("Прописных - %d\n", low);
    printf("Цифр - %d", dig);

    printf("\n");
    return 0;
}
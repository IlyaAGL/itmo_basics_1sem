#include <stdio.h>
#include <stdlib.h>

int main(){
    char mas[4];
    mas[0] = 'a';
    mas[1] = 'b';
    mas[2] = 'c';
    mas[3] = 'd';
    float *arr = mas;
    for(int i = 0; i < 4; i++){
        printf("%c ", *(arr + i));
    }

    printf("\n");
    char* mas_2 = (char*)malloc(sizeof(float) * 4);
    mas_2[0] = 'a';
    mas_2[1] = 'b';
    mas_2[2] = 'c';
    mas_2[3] = 'd';
    for (int i = 0; i < 4; i++){
        printf("%c ", mas_2[i]);
    }
    free(mas_2);

    return 0;
}

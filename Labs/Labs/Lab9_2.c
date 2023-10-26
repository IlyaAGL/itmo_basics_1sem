#include <stdio.h>

int main() {
    int minutes = 0, fixed = 0, extra = 0, sum = 0;
    scanf("%d %d %d", &minutes, &fixed, &extra);
    if (minutes >= 500) {
        minutes -= 499;
        sum = fixed + minutes * extra;
    }
    else {
        sum = fixed;
    }

    printf("%d", sum);
    return 0;
}
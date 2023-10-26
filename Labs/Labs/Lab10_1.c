#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcd(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a = 0, b = 0;
    scanf_s("%d %d", &a, &b);

    printf("мнд - %d\n", gcd(a, b));
    printf("мнй - %d", lcd(a, b));
    return 0;
}
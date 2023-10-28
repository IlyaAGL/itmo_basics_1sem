#include <stdio.h>

union HexToBits {
    unsigned int hexValue;
    struct {
        unsigned int bit1 : 1;
        unsigned int bit2 : 1;
        unsigned int bit3 : 1;
    } bits;
};

int main() {
    union HexToBits converter;

    scanf_s("%x", &converter.hexValue);


    printf("%s", converter.bits.bit1 ? "NumLock вкл \n" : "NumLock выкл \n");
    printf("%s", converter.bits.bit2 ? "CapsLock вкл \n" : "CapsLock выкл \n");
    printf("%s", converter.bits.bit3 ? "ScrollLock вкл \n" : "ScrollLock выкл \n");

    return 0;
}

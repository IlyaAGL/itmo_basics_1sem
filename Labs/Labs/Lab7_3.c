#include <stdio.h>

union HexToBits {
    unsigned int hexValue;
    struct {
        unsigned short bit1 : 1;
        unsigned short bit2 : 1;
        unsigned short bit3 : 1;
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

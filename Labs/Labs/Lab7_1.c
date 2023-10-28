#include <stdio.h>
#include <stdlib.h> 

enum Months
{
    Monday,
    Tuesday,
    Wednesaday,
    Thursday,
    Friday,
    Saturday
}Days;

int main() {
    Days = Monday;
    printf("%d", Days + 1);
    return 0;
}

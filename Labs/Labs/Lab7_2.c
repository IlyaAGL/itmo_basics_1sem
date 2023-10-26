#include <stdio.h>
#include <math.h>

struct line {
    int x1;
    int y1;
    int x2;
    int y2;
};

double len(struct line l) {
    return sqrt((l.x2 - l.x1) * (l.x2 - l.x1) + (l.y2 - l.y1) * (l.y2 - l.y1));
}

int main() {

    struct line myLine;
    myLine.x1 = 1;
    myLine.y1 = 2;
    myLine.x2 = 4;
    myLine.y2 = 6;

    double length = len(myLine);
    printf("\n", length);


    return 0;
}
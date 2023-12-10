#ifndef ops_h
#define ops_h

typedef struct {
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
} Rectangle;

int calculateArea(Rectangle rect);

int calculatePerimeter(Rectangle rect);


#endif

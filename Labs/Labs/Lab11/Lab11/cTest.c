#include <stdio.h>
#include "ops.h"

int main() {
    Rectangle rect;
    // 1 координата
    scanf("%d %d", &rect.x1, &rect.y1);
    // 2 координата
    scanf("%d %d", &rect.x2, &rect.y2);
    // 3 координата
    scanf("%d %d", &rect.x3, &rect.y3);
    // 4 координата
    scanf("%d %d", &rect.x4, &rect.y4);
    
    
    int area = calculateArea(rect);
    int perimeter = calculatePerimeter(rect);

    
    printf("%d\n", area);
    printf("%d\n", perimeter);

    return 0;
}

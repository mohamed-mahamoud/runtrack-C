#include <stdio.h>
#include "manhattan.h"

int manhattan_distance(Point a, Point b) {
    return ABS(a.x - b.x) + ABS(a.y - b.y);
}

int main() {
    Point p1 = {3, 4};
    Point p2 = {1, 2};

    int distance = manhattan_distance(p1, p2);
    printf("Manhattan distance: %d\n", distance);

    return 0;
}
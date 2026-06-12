#ifndef MANHATTAN_H
#define MANHATTAN_H

typedef struct {
    int x;
    int y;
} Point;

#define ABS(x) ((x  < 0) ? -(x) : (x))

int manhattan_distance(Point a, Point b);

#endif //
#ifndef DARTS_H
#define DARTS_H
#define SQUARE(x) ((x) * (x))

typedef struct coordinate_s
{
    double x;
    double y;
} coordinate_t;

int score(coordinate_t cor);

#endif

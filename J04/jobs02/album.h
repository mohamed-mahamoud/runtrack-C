#include <stdio.h>
#ifndef ALBUM_H
#define ALBUM_H

typedef struct {
    char title[100];
    char artist[100];
    int year;
} Album;

void print_album_info(Album *album);

#endif // ALBUM_H
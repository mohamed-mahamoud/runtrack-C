#ifndef ALBUM_LIST_H
#define ALBUM_LIST_H
#include "../jobs02/album.h"
#include "../jobs03/create_album.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct album_item{
    char *artist;
    char *title;
    int year;
    struct album_item *next;
} AlbumItem;

AlbumItem *create_album_item(const char *artist, const char *title, int year);

int count_albums(AlbumItem *list);

AlbumItem *find_album(AlbumItem *list, const char *title);

void reverse_list(AlbumItem **list);

void clear_list(AlbumItem **list);

void push_back_album(AlbumItem **list, AlbumItem *new_item);

#endif
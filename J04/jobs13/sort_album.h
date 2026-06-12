#ifndef SORT_ALBUM_H
#define SORT_ALBUM_H
#include "../jobs10/album_list.h"

void sort_album_by(AlbumItem **list, int (*cmp)(AlbumItem*, AlbumItem*));
void sort_albums(AlbumItem **list);

#endif
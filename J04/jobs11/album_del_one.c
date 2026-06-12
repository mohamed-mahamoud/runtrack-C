#include "album_del_one.h"

static AlbumItem *create_test_album(const char *artist, const char *title, int year) {
    AlbumItem *item;

    item = malloc(sizeof(AlbumItem));
    if (item == NULL) {
        return NULL;
    }
    item->artist = malloc(strlen(artist) + 1);
    item->title = malloc(strlen(title) + 1);
    if (item->artist == NULL || item->title == NULL) {
        free(item->artist);
        free(item->title);
        free(item);
        return NULL;
    }
    strcpy(item->artist, artist);
    strcpy(item->title, title);
    item->year = year;
    item->next = NULL;
    return item;
}

static void append_test_album(AlbumItem **list, AlbumItem *new_item) {
    AlbumItem *current;

    if (*list == NULL) {
        *list = new_item;
        return;
    }
    current = *list;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_item;
}

static void clear_test_list(AlbumItem **list) {
    AlbumItem *current;
    AlbumItem *next;

    current = *list;
    while (current != NULL) {
        next = current->next;
        free(current->artist);
        free(current->title);
        free(current);
        current = next;
    }
    *list = NULL;
}

void album_del_one(AlbumItem **list, AlbumItem *elem) {
    AlbumItem *current;
    AlbumItem *previous;

    if (list == NULL || *list == NULL || elem == NULL) {
        return;
    }
    current = *list;
    previous = NULL;
    while (current != NULL) {
        if (current == elem) {
            if (previous == NULL) {
                *list = current->next;
            } else {
                previous->next = current->next;
            }
            free(current->artist);
            free(current->title);
            free(current);
            return;
        }
        previous = current;
        current = current->next;
    }
}

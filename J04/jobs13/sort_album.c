#include "sort_album.h"

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

static int compare_album_title(AlbumItem *left, AlbumItem *right) {
    return strcmp(left->title, right->title);
}

void sort_album_by(AlbumItem **list, int (*cmp)(AlbumItem*, AlbumItem*)) {
    AlbumItem *sorted;
    AlbumItem *current;

    if (list == NULL || cmp == NULL || *list == NULL) {
        return;
    }

    sorted = NULL;
    current = *list;
    while (current != NULL) {
        AlbumItem *next;

        next = current->next;
        if (sorted == NULL || cmp(current, sorted) < 0) {
            current->next = sorted;
            sorted = current;
        } else {
            AlbumItem *temp;

            temp = sorted;
            while (temp->next != NULL && cmp(current, temp->next) >= 0) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = next;
    }
    *list = sorted;
}

void sort_albums(AlbumItem **list) {
    sort_album_by(list, compare_album_title);
}

int main() {
    AlbumItem *album_list = NULL;

    append_test_album(&album_list, create_test_album("Pink Floyd", "The Dark Side of the Moon", 1973));
    append_test_album(&album_list, create_test_album("The Beatles", "Abbey Road", 1969));
    append_test_album(&album_list, create_test_album("Led Zeppelin", "Led Zeppelin IV", 1971));

    printf("Albums before sorting:\n");
    AlbumItem *current = album_list;
    while (current != NULL) {
        printf("%s - %s (%d)\n", current->artist, current->title, current->year);
        current = current->next;
    }

    sort_album_by(&album_list, compare_album_title);

    printf("\nAlbums after sorting:\n");
    current = album_list;
    while (current != NULL) {
        printf("%s - %s (%d)\n", current->artist, current->title, current->year);
        current = current->next;
    }

    clear_test_list(&album_list);
    return 0;
}
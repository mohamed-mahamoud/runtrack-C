#include "album_list.h"

AlbumItem *create_album_item(const char *artist, const char *title, int year) {
    AlbumItem *item = malloc(sizeof(AlbumItem));
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

int count_albums(AlbumItem *list) {
    int count = 0;
    AlbumItem *current = list;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

AlbumItem *find_album(AlbumItem *list, const char *title) {
    AlbumItem *current = list;
    while (current != NULL) {
        if (strcmp(current->title, title) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

int main() {
    AlbumItem *album1 = create_album_item("Pink Floyd", "The Dark Side of the Moon", 1973);
    AlbumItem *album2 = create_album_item("The Beatles", "Abbey Road", 1969);
    AlbumItem *album3 = create_album_item("Led Zeppelin", "Led Zeppelin IV", 1971);

    album1->next = album2;
    album2->next = album3;

    AlbumItem *current = album1;
    while (current != NULL) {
        printf("%s - %s (%d)\n", current->artist, current->title, current->year);
        current = current->next;
    }

    printf("Total albums: %d\n", count_albums(album1));
    AlbumItem *found = find_album(album1, "Abbey Road");
    if (found != NULL) {
        printf("Found album: %s - %s (%d)\n", found->artist, found->title, found->year);
    } else {
        printf("Album not found.\n");
    }

    free(album1->artist);
    free(album1->title);
    free(album1);
    free(album2->artist);
    free(album2->title);
    free(album2);
    free(album3->artist);
    free(album3->title);
    free(album3);

    return 0;
}
#include "create_album.h"
#include <stdio.h>

void print_album_info(Album *album) {
    printf("\"%s\" by %s, released in %d\n", album->title, album->artist, album->year);
}

Album *create_album(const char *title, const char *artist, int year) {
    Album *new_album = (Album *)malloc(sizeof(Album));
    if (new_album == NULL) {
        return NULL; 
    }
    snprintf(new_album->title, sizeof(new_album->title), "%s", title);
    snprintf(new_album->artist, sizeof(new_album->artist), "%s", artist);
    new_album->year = year;
    return new_album;
}

int main() {
    Album *album1 = create_album("The Dark Side of the Moon", "Pink Floyd", 1973);
    Album *album2 = create_album("Abbey Road", "The Beatles", 1969);

    if (album1 != NULL) {
        print_album_info(album1);
        free(album1);
    } else {
        printf("Failed to create album1\n");
    }

    if (album2 != NULL) {
        print_album_info(album2);
        free(album2);
    } else {
        printf("Failed to create album2\n");
    }

    return 0;
}
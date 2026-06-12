#include "album.h"

void print_album_info(Album *album) {
    printf("\"%s\" by %s, released in %d\n", album->title, album->artist, album->year);
}

int main() {
    Album album1 = {"The Dark Side of the Moon", "Pink Floyd", 1973};
    Album album2 = {"Abbey Road", "The Beatles", 1969};

    print_album_info(&album1);
    print_album_info(&album2);

    return 0;
}
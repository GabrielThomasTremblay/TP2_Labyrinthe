#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <direct.h> // _getcwd
#include <assert.h>
#include "ressource.h"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define HEAP_SIZE 2048 * 2048 * 4
static uint8_t* heap = NULL;
static size_t heap_top = 0;
void* allocate(size_t size) {
    size_t old_top = heap_top;
    heap_top += size;
    assert(heap_top <= HEAP_SIZE);
    return &heap[old_top];
}

void LoadImage() {

    int width;
    int height;
    int channels;
    unsigned char* img = stbi_load("MazeTest/31.bmp", &width, &height, &channels, 1);
    if (img == NULL) {
        printf("Something went wrong while trying to load the image\n");
        return 1;
    }
    for (int i = 0; i < width * height; i++) {

        printf("%d\n", img[i]);

        if (img[i] == 255) {

            //funny :)
        }
    }
    printf("Image was loaded with a width of %d pixels, a height of %d pixels and %d channels\n", width, height, channels);
}

void main() {

    LoadImage();
}

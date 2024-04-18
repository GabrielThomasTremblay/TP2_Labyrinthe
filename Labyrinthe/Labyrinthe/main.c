#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
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















void main() {

}

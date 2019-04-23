#ifndef SHOW_BYTES_H
#define SHOW_BYTES_H

#include <stddef.h>

void show_bytes(unsigned char* start, size_t len);

void show_int(int x);
void show_float(float x);
void show_pointer(void* x);

#endif

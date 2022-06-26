//
// Created by roseduan on 2022/6/13.
//

#ifndef SIMPLE_DB_C_INPUT_H
#define SIMPLE_DB_C_INPUT_H

#include "stdio.h"
#include "stdlib.h"

typedef struct {
  char* buffer;
  size_t buffer_length;
  size_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();
void read_input(InputBuffer* input_buffer);
void close_input_buffer(InputBuffer* input_buffer);

#endif  // SIMPLE_DB_C_INPUT_H

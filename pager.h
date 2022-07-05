#ifndef SIMPLE_DB_C_PAGER_H
#define SIMPLE_DB_C_PAGER_H

#include "consts.h"
#include "stdio.h"
#include "stdlib.h"

typedef struct {
  int file_descriptor;
  uint32_t file_length;
  void* pages[TABLE_MAX_PAGES];
} Pager;

Pager* pager_open(const char* filename);
void* get_page(Pager* pager, uint32_t page_num);
void pager_flush(Pager* pager, uint32_t page_num, uint32_t size);

#endif  // SIMPLE_DB_C_PAGER_H

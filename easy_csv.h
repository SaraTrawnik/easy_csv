#ifndef EASYCSVH
#define EASYCSVH

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char *csv_element; // every element is in reality a string

struct csv_columns {
	csv_element *el;
	size_t num_elements;
};

struct csv_body {	
	struct csv_columns *csv_col;
	size_t num_columns;
};

void free_csv(struct csv_body *bd);
void init_csv(struct csv_body *bd);
#endif
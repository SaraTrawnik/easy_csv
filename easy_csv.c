#include "easy_csv.h"

int init_csv(struct csv_body *bd) {
	bd->num_columns = 1;
	bd->csv_col = malloc(sizeof (struct csv_columns) * bd->num_columns);
	return 0;
}

void free_csv(struct csv_body *bd) {
	for (size_t i = 0; i < bd->num_columns; i++) {
		struct csv_columns column = &bd->csv_col[i];
		for (size_t j = 0; j < column->num_elements; j++) {
			free(column->el[j]);
		}
		free(&bd->csv_col[i]);
	}
}
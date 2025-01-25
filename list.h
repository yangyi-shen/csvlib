#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char **contents;
    size_t length;
} List;

List list_initialize(void);

void list_append(List *list, char *value);
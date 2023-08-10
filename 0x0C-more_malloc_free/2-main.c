#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *concat;

    concat = string_nconcat("Hello, ", "world!", 7);
    if (concat != NULL)
    {
        printf("%s\n", concat);
        free(concat);
    }

    return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;
    char *buffer;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }

    /* Create a buffer using the create_buffer function */
    buffer = create_buffer(av[1]);
    
    /* Read and print the file */
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);

    /* Free the allocated buffer */
    free(buffer);

    return (0);
}

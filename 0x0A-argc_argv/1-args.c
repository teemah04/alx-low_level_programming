#include <stdio.h>
#include <stdlib.h>

/**
 * main-Entry point
 * @argc:argument count
 * @argv:argument vector
 * Return:0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argv - 1);

	exit(EXIT_SUCCESS);

}

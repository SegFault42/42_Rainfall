#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *ptr;

	if(argc < 3)
	{
		printf("Usage: ./getenv <environment variable> <target name program>\n");
		exit(EXIT_FAILURE);
	}
	ptr = getenv(argv[1]);
	if (ptr == NULL)
	{
		printf("Variable not found\n");
		exit(EXIT_FAILURE);
	}
	ptr += strlen(argv[0]) - strlen(argv[2]); // soustraction de la longueur du path ou ce trouve le binaire - la taille du nom du programme
	printf("Variable = %s Addr = %p\n", argv[1], ptr);

	return EXIT_SUCCESS;
}


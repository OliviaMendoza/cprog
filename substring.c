#include<stdio.h>
#include<malloc.h>
char* substring(char*, int, int);
main()
{
	char string[100], *pointer;
	int position, length;

	printf("Enter a string\n");
	gets(string);

	printf("Enter the position and length of substring\n");
	scanf("%d%d", &position, &length);

	pointer = substring( string, position, length);

	printf("Required substring is\"%s\"\n", pointer);

	free(pointer);
	
	return 0;
}

char *pointer;
{
	int c;


	pointeer = malloc(length + 1);

	if (pointer == NULL)
	{
		printf("Unable to allocate memory.\n");
		exit(EXIT_FAILURE);
	}

	for ( c = 0 ; c < position - 1 ; c++ )
		string++;
	for ( c = 0 ; c < length ; c++ )
	{
		*(pointer+c) = *string;
		string++;
	}
	*(pointer+c) = '\0';

	return 0;
}

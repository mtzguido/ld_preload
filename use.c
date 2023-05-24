#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	printf("Here are 5 random numbers!\n");
	for (i = 0; i < 5; i++)
		printf("%i\n", rand());

	return 0;
}

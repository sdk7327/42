#include <stdio.h>

int	main(void)
{
	printf("0\n");
	int i = 1;

	while (i <= 100)
	{
	if (i % 3 == 0)
	{
		printf("fizz");
		if (i % 5 != 0)
			printf("\n");
	}
	if (i % 5 == 0)
		printf("buzz");
	else
		printf("%i", i);
	i++;
	printf("\n");
	}

}

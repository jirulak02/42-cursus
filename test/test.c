#include <strings.h>
#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	int i = -2147483647 -1;
	long l = -2147483648;
	long li;

	printf("%i\n", i);
	printf("%li\n", l);

	li = i;
	i *= -1;
	li *= -1;
	l *= -1;

	printf("%i\n", i);
	printf("%li\n", l);
	printf("%li\n", li);

	return (0);
}

#include <unistd.h>

int	ft_strlen(char *c)
{
	int i;

	i = 0;
	while(c[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int j;

	j = 0;
	j = ft_strlen(argv[0]);
	write (1, argv[0], j);
	write (1, "\n", 1);
	return (0);
}

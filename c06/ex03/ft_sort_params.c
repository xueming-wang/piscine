#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*void	ft_print_params(int argc, char**argv)
{
	int i;
	
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
}*/
int	main(int argc, char **argv)
{
	int i;
	int j;
	char *tmp;

	i = 0;
	while (argc - 1 > ++i)
	{
		j = i + 1;
		while (j < argc)
		{
		
			if(ft_strcmp(argv[i], argv[j]) > 0)
			{	
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			
			}
			j++;
		}
		
	}
	i = 0;
	while (argc > ++i)
	{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
	}
}

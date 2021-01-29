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
void	ft_print_params(int argc, char**argv)
{
	int i;
	
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
}
int	main(int argc, char **argv)
{
	int i;
	int j;
	char *c;

	i = argc - 1;
	while (i > 1)
	{
		j = i - 1;
		while (j > 0)
		{
		
			if(ft_strcmp(argv[i], argv[j]) < 0)
			{	
				c = argv[i];
				argv[i] = argv[j];
				argv[j] = c;
			
			}
			j--;
		}
		i--;
	}
		ft_print_params(argc, argv);

		//*i = 1;
		//while (i< argc) 
		//{
			//ft_putstr(argv[i]);
			//write (1, "\n",1);
			//i++;
		//}


		
}

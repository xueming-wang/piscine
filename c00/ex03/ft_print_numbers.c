#include <unistd.h>

void	ft_print_numbers(void)
{
	char a = 48;
    while ( a <= 57)
    {
	write( 1, &a, 1);
	a++ ;
    }
}


#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
/*int	check_c(char c)
{
	if(c <  32 || c == 127)
		return (1);
	return (0);
}*/
void	change_n(char c)
{
	char *hex = "0123456789abcdef";

	//if (check_c(c))
	//{
		ft_putchar(hex[c / 16]);
		ft_putchar(hex[c % 16]);
	//} 

}
void	ft_putstr_non_printable(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write (1, "\\", 2);
			change_n(str[i]);
		}
		else
		ft_putchar(str[i]);
		i++;
	}	
}
#include <libc.h>
int main()
{
	char *a = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(a);
	return 0;
}


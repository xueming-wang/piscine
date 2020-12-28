
int	ft_atoi(char *str)
{
	int i;
	int resultat;
	int k;

	i = 0;
	resultat = 0;
	k = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			k++;
		i++;
	}
	k = ((k % 2) ? -1 : 1);
	while (str[i] >= '0' && str[i] <= '9')
	{	
		resultat = resultat * 10 + str[i] - 48;
		i++;	
	}
	return (resultat * k);
}
#include <libc.h>
int main()
{
	char str[20] = "--++345fds";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", '\t');
	printf("%c\n", 9);
	return 0;
}

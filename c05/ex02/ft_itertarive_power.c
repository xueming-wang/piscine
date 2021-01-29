
int	ft_iterative_power(int nb, int power)
{
	int resultat;

	resultat = nb;
	if (power < 0)
		return (0);
	while (power > 1)
	{
		resultat = resultat * nb;
		power--;
	}
	return (resultat);
}
#include <libc.h>
int main()
{
	int nb = 2;
	int power = 3;
	printf("%d", ft_iterative_power(2, 3));
	return 0;
}


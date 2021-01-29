
int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}	
	return (1);
}

int	ft_find_next_prime(int nb)
{
	//int i;
	
	//i = nb;
	if (nb <= 1)
		return (2);
	while (!(ft_is_prime(nb)))
		nb++;
	return  (nb);
}

#include <libc.h>
int main()
{
	int nb = 6;

	printf("%d",  ft_find_next_prime(nb));

}

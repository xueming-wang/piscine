
int	ft_iterative_factorial(int nb)
{
	int sum;

	sum = 1;	
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);

	while(nb >= 1)
	{
		sum = sum * nb;
		nb--;
	}	
	return (sum);
}
#include <libc.h>
int main()
{
	int nb = 8;
	printf("%d",ft_iterative_factorial(nb));
	return 0;
}


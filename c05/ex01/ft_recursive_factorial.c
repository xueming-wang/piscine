
int	ft_recursive_factorial(int nb)
{
	int sum;
	sum = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if(nb >= 1)
		sum = nb * ft_recursive_factorial(nb - 1);
		return (sum);
}
#include <libc.h>
int main()
{
	int nb = 5;
	printf("%d\n", ft_recursive_factorial(nb));
	return 0;
}

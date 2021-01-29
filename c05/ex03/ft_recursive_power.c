
int	ft_recursive_power(int nb, int power)
{
	int sum;

	sum = nb;
	if (power < 0)
		return (0);
	else if (power > 1)
		sum = nb * ft_recursive_power(nb, (power - 1));
	return (sum);
}

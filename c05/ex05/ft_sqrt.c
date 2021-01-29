
int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i < nb)   // && i <= nb / 2
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int *tab;
	int len;
	int i;


	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	tab  = (int*)malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);

	while (i < len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int main()
{
	int *ptr = ft_range(11, 20);
	int i = -1;
	while (++i < 9)
		printf("%d\n", ptr[i]);
}

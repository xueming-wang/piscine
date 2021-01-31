#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *a;
	int i;
	int len;
	
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	a = (int*)malloc(sizeof(int)*len);
	if (a == NULL)
		return (-1);
	while (i < max)
	{	
		a[i] = min;
		min++;
		i++;
	}
	*range = a;
	return (len);
}
#include <libc.h>
int main()
{
	int *range;
	int min = 11;
	int max = 20;
	int i = 0;
	printf("len of range :%d\n", ft_ultimate_range(&range, min, max));
	while (min < max)
	{
		printf("number in range : %d\n", range[i]);
		i++;
		min++;
	}
	return 0;
	
}
	

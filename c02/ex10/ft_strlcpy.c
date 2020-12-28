
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (src[i])
		i++;

	if (size == 0)
	return (i);

	j = 0;
	while (src[j] && i < size - 1)
	{
		
		dest[j]= src[j];
		j++;
	
	}
	dest[j] = '\0';
	return (i);

}
#include <libc.h>
int main()
{
	char dest[6];
	char src[100] = "12345678";
	unsigned int l = ft_strlcpy(dest, src, 6);
	printf("%d", l);
	return 0;
}

/*char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}*/

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *i;

	i = dest;
	while (*dest)
		dest++;
	while (*src && nb--)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}

#include<libc.h>
int main()
{
	char dest[20] = "hello";
	char *src = "xue";
	printf("%s\n",ft_strncat(dest, src, 2));
}

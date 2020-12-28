
char	*ft_strcpy1(char *dest, char *src)
{
	int i;
	
	i  = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len;

	len = 0;
	while (src[len])
		++len;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (len);
}

#include <libc.h>

int main()
{
	char dst[20];
	char *str = "hello";
	unsigned int n;
	printf("before cpy : %s\n", dst);
	ft_strlcpy(dst, str, sizeof(dst));
	printf("after cpy : %s\n", dst);
}

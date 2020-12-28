
char *ft_strcat(char *dest, char *src)
{
	char *i;

	i = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}

#include <libc.h>
int main()
{
	char dest[10] = "123";
	char *src = "go";
	printf("%s", ft_strcat(dest, src));
}


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

#include <libc.h>
int main()
{
	char dest[100]="hello";
	char *src = "xurxur";
	printf("%s", ft_strncat(dest, src, 3));
	return 0;

}

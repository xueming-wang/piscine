
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1  && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <libc.h>
int main ()
{
	char *s1 = "\0";
	char *s2 = "abc";
	printf("%d", ft_strcmp(s1, s2));
	return 0;
}

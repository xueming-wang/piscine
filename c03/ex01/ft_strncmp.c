int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0  && *s1 != '\0' && *s1 == *s2)
	{	
		s1++;
		s2++;
		n--;
	}
	return ((n)? *s1 - *s2 : 0);
}

#include <libc.h>

int main()
{
	char *s1 = "acd";
	char *s2 = "\0";

	int i = ft_strncmp(s1, s2, 3);
	printf("%d\n", i);
}


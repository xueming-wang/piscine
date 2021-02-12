#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	dest = (char*)malloc(sizeof(char)*i+1);
	if(!dest)
		return (NULL);
	while (src[j])
	{
		dest[j]= src[j];
		j++;
	}
	dest[j] = '\0';	
	return (dest);
}
#include <libc.h>	
int main()
{
	char *src= "abc";
	printf("%s\n", ft_strdup(src));

	return 0;
}

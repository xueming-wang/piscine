#include <stdio.h>
void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return temp;
}
int main()
{
	char dest[10] = "abc";
	char *src = "xuexue";
	ft_strncpy(dest, src, 6);
	printf("%s\n",dest);
	return 0;
}


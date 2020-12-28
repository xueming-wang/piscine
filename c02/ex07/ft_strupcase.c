
char	*ft_strupcase(char *str)
{
	//int i;

	//i = 0;
char *s;
s = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (s);
}

#include <libc.h>

int main()
{
	char str[100] = "tmd Wo yao chi fan !! 123 LoL";
	ft_strupcase(str);
	printf("%s\n", str);
}

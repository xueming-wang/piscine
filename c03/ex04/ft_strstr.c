
char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (!*to_find)
		return (str);
	while (*str)
	{	
		if(*str == *to_find)
		{
			i = 1;
			
			while (to_find[i] && str[i] == to_find[i])
				i++;
			if (!to_find[i])
			return	(str);
		}
		str++;
	}

		
	return  0;
}


#include <libc.h>
int main()
{
	char *str = "woainixuexue21";
	char *to_find = "xue";
	printf("%s", ft_strstr(str, to_find));
	return 0;
}

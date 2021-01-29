char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;

	if (!to_find[i])
		return (str);
	while(str[i])
	{
		j = 0;
		while (str[j+i] == to_find[j])
		{
			if (!to_find[j])
				return (&str[i]);
			j++;
		}
		
		i++;
	}
	return 0;	
}		
#include <libc.h>
int main()
{
	char *str = "woainixuexue21";
	char *to_find = "oa";
	printf("%s", ft_strstr(str, to_find));
	return 0;
}

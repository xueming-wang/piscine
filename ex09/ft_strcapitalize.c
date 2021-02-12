#include <libc.h>
char	*ft_strlowcase(char*str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;	
		i++;
	}
	return (str);
}
int	check_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	check_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char *ft_strcapitalize(char *str)
{
	int i;

	ft_strlowcase(str);
	i = 0;
	while(str[i]) 
	{
		if ((i == 0 && check_alpha(str[0]) == 1) || (check_alpha(str[i]) == 1 && check_alphanum(str[i - 1]) == 0))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "sAlut, cOMMent tu vas ? 42m";
	printf("%s", ft_strcapitalize(str));

}

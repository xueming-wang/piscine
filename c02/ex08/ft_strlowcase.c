
char	*ft_strlowcase(char *str)
{
	char *a;

	a = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (a);
}

char	ft_clowcase(char c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	ft_cupcase(char c)
{
	if(c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	check_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int 	check_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (check_alpha(str[i]) == 1)
			str[i] = ft_clowcase(str[i]);
		i++;
	}

	i = 0;
	while (str[i])
	{
		if (i == 0 || (check_alpha(str[i - 1]) == 0 && check_num(str[i - 1]) == 0))
			str[i] = ft_cupcase(str[i]);
		i++;
	
	}
	return (str);
}

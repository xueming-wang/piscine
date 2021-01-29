unsigned int	ft_strlen(char *str)
{
	unsigned int i;
	
	i = 0;
	while (str[i])
		i++;
	return(i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;

	i = ft_strlen(dest);
	if(size == 0)
		return (ft_strlen(src));
	else if (size > i)
		len = ft_strlen(src) + i;
	else 
		len = ft_strlen(src) + size;
	j = 0;
	while (src[j] && (i + j) < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (len);
}

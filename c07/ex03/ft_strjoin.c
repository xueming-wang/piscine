#include <stdlib.h>

int	strlen_sep(char *sep)
{
	int i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	strlen_strs(int size, char **strs)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		
		while (strs[i][j])
		{
			j++;
			len++;
		}
		
		i++;
	}
	return (len);
}

char	*ft_malloc(int size, char**strs, char *sep)
{
	char *a;

	a = (char*)malloc(sizeof(char) * strlen_strs(size,strs)
				+ (strlen_sep(sep) * size - 1) + 1);
	if(!a)
		return(0);
	return (a);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *group;
	int i;
	int j;
	int group_i;
	int sep_i;


	i = 0;
	group_i = 0;
	group = ft_malloc(size, strs, sep);
	if (!group) 
		return (NULL); 
	while (size > 0 && i < size)
	{
		j = 0;
		while (strs[i][j])	
			group[group_i++] = strs[i][j++];
		sep_i = 0; 
		while (sep[sep_i] && i < size - 1)
			group[group_i++] = sep[sep_i++];
		i++; 
	}
	group[group_i] = '\0';
	return (group);
}

#include <libc.h>
int main()
{
	int size = 2;
	char *strs[3] = {"hello", "world","YINGYINGYING"}; 
	 
	char *sep = "-";
	printf("%s\n", ft_strjoin(3, strs, sep)); 
	return 0;
}

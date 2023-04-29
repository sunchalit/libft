static size_t	count_sep(char const *s, char c)
{
	int	count;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}
static size_t	split_length(char cont *s, char c)
{	
	size_t	count;
	
	count = 0
	while (*s && *s != c)
	{
		count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char 	*str;
	size_t	len;
	size_t	split_len
	size_t	i;

	if (!s)
		return (s);
	len = count_sep(s, c);
	split = (char **)malloc(sizeof(char *) * (len + 1));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		split_len = split_length(char const *s, char c);
		if (split_len)
		{
			str = (char *)malloc(sizeof(char) * (split_len + 1);
			while (str)
			{
				str = *s;
				str++;
				s++;
			}
			str[split_len] = '\0';
			i = 0;
			while (split[i] != '\0')
			{
				split[i] = str;
			}
			i++;
		}
		s = s + split_len;
	}
	split[i] = '\0';
	return (split);
}

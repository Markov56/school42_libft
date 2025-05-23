#include "libft.h"

static int	in_set(char c, char const *set)
{
	while (*set)
	{
		if	(*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new_str;
	size_t	new_len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (end > start && in_set(s1[end], set))
		end--;
	new_len = end - start + 1;
	new_str = (char *)malloc(sizeof(char) * (new_len + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1 + start, new_len + 1);
	return (new_str);
}
/*
int	main()
{
	printf("%s\n", ft_strtrim("  \t\nHello world! \n ", " \n\t"));
	printf("%s\n", ft_strtrim("---abc---", "-"));
	printf("%s\n", ft_strtrim("xx42xx", "x"));

	return (0);
}
*/
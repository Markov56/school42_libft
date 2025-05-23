#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, s1, s1_len);
	ft_memcpy(new_str + s1_len, s2, s2_len);
	new_str[s1_len + s2_len] = '\0';
	return (new_str);
}

/*
void test(const char *s1, const char *s2)
{
    char *res = ft_strjoin(s1, s2);

    if (res)
        printf("ft_strjoin(\"%s\", \"%s\") → \"%s\"\n", s1, s2, res);
    else
        printf("ft_strjoin(\"%s\", \"%s\") → NULL\n", s1, s2);

    free(res);
}

int main(void)
{
    test("Hello", "World");
    test("", "World");
    test("Hello", "");
    test("", "");
    test("42", " Berlin");
    test("abc", "123");

    return 0;
}
*/
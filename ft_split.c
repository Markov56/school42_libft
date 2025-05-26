/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarkov <rmarkov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:28:50 by rmarkov           #+#    #+#             */
/*   Updated: 2025/05/26 14:28:52 by rmarkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_extract_word(const char *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	len = i;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**words;

	words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words || !s || !c)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j] = ft_extract_word(s + i, c);
			while (s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}
/*
int	main()
{
	char **result = ft_split("hello world how are you?", ' ');
	int i = 0;
	while (i < 5)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
*/

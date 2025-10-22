/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:49:07 by stagma            #+#    #+#             */
/*   Updated: 2025/10/22 20:12:47 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0 ;
	count = 0 ;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_wordlen(char const *s, char c, size_t index)
{
	size_t	i;
	size_t	j;
	size_t	len;

	j = 0 ;
	i = 0 ;
	while (j <= index)
	{
		len = 1 ;
		while (s[i] == c)
			i++;
		while (s[i] != c)
		{
			len++;
			i++;
		}
		j++;
	}
	return (len);
}

static	void	ft_cpypst(char *str, const char *s, char c, size_t	index)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0 ;
	j = 0 ;
	while (j < index)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
			i++;
		j++;
	}
	while (s[i] == c)
		i++;
	k = 0 ;
	while (s[i] != c)
	{
		str[k] = s[i];
		k++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;
	size_t	nb_words;
	size_t	x;
	size_t	i;

	nb_words = ft_countwords(s, c);
	ptr = malloc((nb_words + 1) * sizeof(char *));
	if (!ptr)
		return (0);
	i = 0 ;
	while (i < nb_words)
	{
		x = ft_wordlen(s, c, i);
		str = ft_calloc(x + 1, sizeof(char));
		if (!str)
			return (0);
		ft_cpypst(str, s, c, i);
		ptr[i] = str ;
		i++;
	}
	return (ptr);
}

int main()
{
	printf("%s\n", *(ft_split("hello this is awesome", ' ')));
	printf("%s\n", *(ft_split("hello this is awesome", ' ') + 1));
	printf("%s\n", *(ft_split("hello this is awesome", ' ') + 2));
	printf("%s\n", *(ft_split("hello this is awesome", ' ') + 3));
	printf("%s\n", *(ft_split("hello this is awesome", ' ') + 4));
	printf("%s\n", *(ft_split("hello this is awesome", ' ') + 5));
}


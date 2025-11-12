/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:49:07 by stagma            #+#    #+#             */
/*   Updated: 2025/11/05 18:42:02 by stagma           ###   ########.fr       */
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
		if (s[i] != c && (i == 0 || s[i - 1] == c))
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
		len = 0 ;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
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
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	while (s[i] && s[i] == c)
		i++;
	k = 0 ;
	while (s[i] && s[i] != c)
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[k] = '\0' ;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	ptr = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (0);
	i = 0 ;
	while (i < ft_countwords(s, c))
	{
		ptr[i] = ft_calloc(ft_wordlen(s, c, i) + 1, sizeof(char));
		if (!ptr[i])
		{
			while (i > 0)
				free(ptr[--i]);
			free(ptr);
			return (0);
		}
		ft_cpypst(ptr[i], s, c, i);
		i++;
	}
	ptr[i] = 0 ;
	return (ptr);
}

// int main()
// {
// 	char **p = ft_split(NULL, ' ');
// 	if(!p)
// 		printf("returned null");
// 	// printf("%c\n", p);
// 	// printf("%s\n", p[1]);
// 	// printf("%s\n", p[2]);
// 	// printf("%s\n", p[3]);
// 	// printf("%s\n", p[5]);
// }

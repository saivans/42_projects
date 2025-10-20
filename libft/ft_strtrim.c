/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:20:04 by stagma            #+#    #+#             */
/*   Updated: 2025/10/18 19:31:01 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim(const char *set, char c)
{
	int	i;

	i = 0 ;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_substr_pp(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	i = 0 ;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (0);
	i = 0 ;
	while (s1[i] && ft_trim(set, s1[i]))
		i++;
	if (s1[i] == '\0')
		return (ft_substr_pp(s1, 0, 0));
	j = ft_strlen(s1) - 1;
	while (j > i && ft_trim(set, s1[j]))
		j--;
	return (ft_substr_pp(s1, i, j - i + 1));
}

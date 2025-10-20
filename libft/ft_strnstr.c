/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:47:00 by stagma            #+#    #+#             */
/*   Updated: 2025/10/17 20:18:13 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return (haystack);
	j = 0 ;
	while (haystack[j] && j < len)
	{
		i = 0 ;
		while (needle[i] && haystack[i + j] && haystack[i + j] == needle[i]
			&& j + i < len)
			i++;
		if (needle[i] == '\0')
			return ((char *)(haystack + j));
		j++;
	}
	return (0);
}

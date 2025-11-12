/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:47:00 by stagma            #+#    #+#             */
/*   Updated: 2025/11/12 11:52:10 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	j = 0 ;
	while (haystack && haystack[j] && j < len)
	{
		i = 0 ;
		while (needle[i] && haystack[i + j] && haystack[i + j] == needle[i]
			&& j + i < len)
			i++;
		if (needle[i] == '\0')
			return ((char *)(haystack + j));
		j++;
	}
	return (NULL);
}

// #include <string.h>

// int main()
// {
// 	// printf("%s\n", ft_strnstr(NULL, "0", 0));
// 	printf("%s\n", strnstr(NULL, "0", 0));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:15:20 by stagma            #+#    #+#             */
/*   Updated: 2025/10/18 19:33:18 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (len_s < start)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = (char *)ft_calloc(len + 1, sizeof(char));
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

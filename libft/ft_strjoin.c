/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:49:59 by stagma            #+#    #+#             */
/*   Updated: 2025/10/18 15:10:54 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!str)
		return (0);
	i = 0 ;
	j = 0 ;
	while (i < len1 + len2)
	{
		if (i < len1)
			str[i] = s1[i];
		else
			str[i] = s2[j++];
		i++;
	}
	return (str);
}

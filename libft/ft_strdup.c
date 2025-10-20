/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:09:17 by stagma            #+#    #+#             */
/*   Updated: 2025/10/18 11:44:03 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*ptr;

	i = 0 ;
	while (*(s1 + i))
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, (i + 1));
	return (ptr);
}

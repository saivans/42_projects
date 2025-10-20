/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:37:01 by stagma            #+#    #+#             */
/*   Updated: 2025/10/16 15:37:52 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src || len == 0)
		return (dst);
	i = len ;
	if (dst > src)
	{
		while (i > 0)
		{
			((char *)dst)[i - 1] = ((char *)src)[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

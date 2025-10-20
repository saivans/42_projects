/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:37:08 by stagma            #+#    #+#             */
/*   Updated: 2025/10/18 10:57:29 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned int	i;

	ptr = malloc(size * count);
	if (ptr == 0)
		return (0);
	i = 0 ;
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

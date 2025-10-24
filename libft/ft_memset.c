/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:05:26 by stagma            #+#    #+#             */
/*   Updated: 2025/10/24 21:15:25 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0 ;
	while (i < len)
	{
		*((unsigned char *)b + i) = (unsigned char)c ;
		i++;
	}
	return (b);
}

int main()
{
	int b = 42 ;
	int *a = &b;
	ft_memset(a, 1337, 1);
	printf("%s\n", b);
}

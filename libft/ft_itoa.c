/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:52:38 by stagma            #+#    #+#             */
/*   Updated: 2025/10/25 16:08:48 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findiv(int n, size_t *ndigits)
{
	unsigned int	divisor;
	unsigned int	nb;

	if (n >= 0)
		nb = n ;
	else
		nb = -n ;
	divisor = 1 ;
	*ndigits = 1 ;
	while (nb / divisor >= 10)
	{
		(*ndigits)++;
		divisor *= 10 ;
	}
	return (divisor);
}

static char	*ft_allocate(int n, unsigned int *divisor)
{
	size_t			i;
	char			*str;

	i = 0 ;
	*divisor = ft_findiv(n, &i);
	if (n >= 0)
	{
		str = ft_calloc(i + 1, sizeof(char));
		if (!str)
			return (0);
	}
	else
	{
		str = ft_calloc(i + 2, sizeof(char));
		if (!str)
			return (0);
		str[0] = '-' ;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char				*str;
	size_t				i;
	unsigned int		divisor;
	unsigned int		nb;

	str = ft_allocate(n, &divisor);
	if (n >= 0)
	{
		i = 0 ;
		nb = n ;
	}
	else
	{
		i = 1 ;
		nb = -n ;
	}
	while (divisor >= 1)
	{
		str[i++] = nb / divisor + '0' ;
		nb = nb % divisor ;
		divisor /= 10 ;
	}
	return (str);
}

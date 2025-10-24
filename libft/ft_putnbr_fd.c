/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:56:20 by stagma            #+#    #+#             */
/*   Updated: 2025/10/24 19:09:04 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		nb;
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			write(fd, "2", 1);
			nb = 147483648 ;
		}
		else
			nb = -n ;
	}
	else
		nb = n ;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	c = nb % 10 + '0' ;
	ft_putchar_fd(c, fd);
}

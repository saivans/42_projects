/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:34:44 by stagma            #+#    #+#             */
/*   Updated: 2025/11/05 20:38:07 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s ;
	i = 0 ;
	while (i < n)
	{
		str[i] = '\0' ;
		i++;
	}
}

// int main()
// {
// 	char	ptr[16] = "this is awesome";
// 	ft_bzero(NULL, 5);
// 	printf("%s\n", ptr);
// }

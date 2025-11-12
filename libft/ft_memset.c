/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:05:26 by stagma            #+#    #+#             */
/*   Updated: 2025/11/09 19:48:56 by stagma           ###   ########.fr       */
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

// typedef struct {
// 	int a;
// 	char b;
// 	long c;
// } list;
// int main()
// {
// 	list a[] = {{133337, 'c', 1544444}
//  {425145, 'l', 15454875121}, {5487, 'a', 44343512}};
// 	int i = 0 ;
// 	ft_memset(&(a[0].a), 0, 4);
// 	ft_memset((unsigned char *)&(a[0].a), 0b0111001, 1);
// 	ft_memset((unsigned char *)&(a[0].a) + 1, 0b0000101, 1);
// 	printf("%d\n", a[0].a);
// }
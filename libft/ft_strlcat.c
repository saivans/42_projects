/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:36:38 by stagma            #+#    #+#             */
/*   Updated: 2025/11/05 18:53:36 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;	

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	len_src = ft_strlen(src);
	len_dst = ft_strlen((const char *)dst);
	if (dstsize == 0 || len_dst >= dstsize)
		return (len_src + dstsize);
	i = 0 ;
	while (src[i] && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0' ;
	return (len_src + len_dst);
}

// int main()
// {
// 	char a[] = "abd";
// 	char b[] = "hgfds";
// 	//printf("%zu\n",ft_strlcat(b,a,10));
// 	//printf("%zu\n",strlcat(b,a,10));

// }
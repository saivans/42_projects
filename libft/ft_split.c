/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:03:57 by stagma            #+#    #+#             */
/*   Updated: 2025/10/20 20:54:17 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numwords(char const *s, char c)
{
	size_t	num;
	size_t	flag;
	size_t	i;

	if (s[0] == c)
		num = 0 ;
	else
		num = 1 ;
	flag = 0 ;
	i = 0 ;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			flag = 1;
		if (flag)
		{
			num++;
			flag = 0 ;
		}
		i++;
	}
	return (num);
}

char	**ft_split(char const *s, char c)
{
	
}

int main ()
{
	printf("%d\n", ft_numwords("   this    is  awrsome    dsfsd", ' '));
}
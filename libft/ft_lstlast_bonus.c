/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:55:39 by stagma            #+#    #+#             */
/*   Updated: 2025/11/09 16:33:18 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;
	t_list	*temp;

	if (!lst)
		return (0);
	ptr = lst ;
	while (ptr != 0)
	{
		temp = ptr ;
		ptr = ptr -> next ;
	}
	return (temp);
}

// int	main(void)
// {
// 	t_list	*l1 = malloc(sizeof(t_list));
// 	t_list	*l2 = malloc(sizeof(t_list));
// 	t_list	*l3 = malloc(sizeof(t_list));
// 	t_list	*l4 = malloc(sizeof(t_list));

// 	l1 -> next = l2 ;
// 	l2 -> next = l3 ;
// 	l3 -> next = l4 ;
// 	l4 -> next = NULL ;
// 	printf("%p\n", l4);
// 	printf("%p\n", ft_lstlast(l1));
// }

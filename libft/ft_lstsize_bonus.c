/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:53:29 by stagma            #+#    #+#             */
/*   Updated: 2025/10/25 20:27:32 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		len;

	if (!lst)
		return (0);
	len = 0 ;
	ptr = lst ;
	while (ptr != 0)
	{
		ptr = ptr -> next ;
		len++;
	}
	return (len);
}

// int main()
// {
// 	t_list	*l1 = malloc(sizeof(t_list));
// 	t_list	*l2 = malloc(sizeof(t_list));
// 	t_list	*l3 = malloc(sizeof(t_list));

// 	l1 -> next = l2 ;
// 	l2 -> next = l3 ;
// 	l3 -> next = 0 ;
// 	printf("%d\n", ft_lstsize(l1));
// }

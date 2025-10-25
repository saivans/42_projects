/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:55:39 by stagma            #+#    #+#             */
/*   Updated: 2025/10/25 20:27:18 by stagma           ###   ########.fr       */
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

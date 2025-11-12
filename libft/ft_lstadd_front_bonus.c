/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:29:52 by stagma            #+#    #+#             */
/*   Updated: 2025/11/09 16:19:54 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	(*new).next = *lst ;
	*lst = new ;
}

// int	main(void)
// {
// 	t_list	**ptr;
// 	t_list	*lst;
// 	t_list	*new;

// 	new->content = "hello";
// 	new->next = NULL;
// 	lst = NULL ;
// 	ptr = &lst ;
// 	ft_lstadd_front(ptr, new);
// }

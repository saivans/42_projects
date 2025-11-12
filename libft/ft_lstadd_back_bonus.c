/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:18:54 by stagma            #+#    #+#             */
/*   Updated: 2025/11/09 16:40:53 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new ;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr->next = new ;
}

// int	main(void)
// {
// 	t_list	*l1 = malloc(sizeof(t_list));
// 	t_list	**ptr = &l1;
// 	t_list	*l2 = malloc(sizeof(t_list));
// 	t_list	*l3 = malloc(sizeof(t_list));
// 	t_list	*l4 = malloc(sizeof(t_list));
// 	t_list	*new = malloc(sizeof(t_list));

// 	new->content = "hellow" ;
// 	new->next = NULL ;
// 	l1 -> next = l2 ;
// 	l2 -> next = l3 ;
// 	l3 -> next = l4 ;
// 	l4 -> next = NULL ;
// 	ft_lstadd_back(ptr, new);
// 	printf("%p\n", l4->next);
// 	printf("%p\n", new);
// }

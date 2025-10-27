/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:26:29 by stagma            #+#    #+#             */
/*   Updated: 2025/10/27 18:27:41 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;
	t_list	*temp;

	head = malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = f(lst->content);
	head->next = 0 ;
	tail = head ;
	lst = lst->next ;
	while (lst)
	{
		temp = malloc(sizeof(t_list));
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		temp->content = f(lst->content);
		temp->next = 0 ;
		tail->next = temp ;
		tail = temp ;
		lst = lst->next ;
	}
	return (head);
}

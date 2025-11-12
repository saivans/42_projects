/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:42:17 by stagma            #+#    #+#             */
/*   Updated: 2025/11/09 17:54:04 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_del(void *ptr)
// {
// 	free(ptr);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !*lst || !del)
		return ;
	ptr = *lst ;
	while (ptr != 0)
	{
		ptr = (*lst)->next ;
		ft_lstdelone(*lst, del);
		*lst = ptr ;
	}
	*lst = NULL ;
}

// int	main(void)
// {
// 	t_list	*l1 = malloc(sizeof(t_list));
// 	t_list	*l2 = malloc(sizeof(t_list));
// 	t_list	*l3 = malloc(sizeof(t_list));

// 	l1->content = malloc(10);
// 	strcpy(l1->content, "helloh");
// 	l2->content = malloc(10);
// 	strcpy(l2->content, "helloe");
// 	l3->content = malloc(10);
// 	strcpy(l3->content, "helloy");
// 	printf("%s\n%s\n%s\n", (char *)(l1->content), 
// (char *)(l2->content), (char *)(l3->content));
// 	l1->next = l2 ;
// 	l2->next = l3 ;
// 	l3->next = NULL;
// 	ft_lstclear(&l1, &ft_del);
// 	printf("%p\n%p\n%p\n", l1, l2, l3);
// }

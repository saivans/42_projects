/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:34:01 by stagma            #+#    #+#             */
/*   Updated: 2025/11/09 17:48:57 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_del(void *ptr)
// {
// 	free(ptr);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*l1 = malloc(sizeof(t_list));
// 	l1->content = malloc(10);
// 	strcpy(l1->content, "hellow");
// 	printf("%s\n", (char *)(l1->content));
// 	ft_lstdelone(l1, &ft_del);
// 	printf("%s\n", (char *)(l1->content));
// }

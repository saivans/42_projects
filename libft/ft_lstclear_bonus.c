/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stagma <stagma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:42:17 by stagma            #+#    #+#             */
/*   Updated: 2025/10/25 21:02:03 by stagma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!*lst || !del || !lst)
		return ;
	ptr = *lst ;
	while (ptr != 0)
	{
		ptr = (*lst)->next ;
		ft_lstdelone(*lst, del);
		*lst = ptr ;
	}
}

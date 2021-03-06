/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhan <sanhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 17:04:22 by sanhan            #+#    #+#             */
/*   Updated: 2020/04/16 11:49:35 by sanhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == 0 || *lst == 0)
		return ;
	while (*lst != 0)
	{
		temp = *lst;
		del(temp->content);
		*lst = (*lst)->next;
		free(temp);
	}
	*lst = 0;
	return ;
}

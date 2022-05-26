/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:28:24 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/25 18:37:53 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*my;

	my = *lst;
	if (lst != NULL)
	{
		while (my != NULL)
		{
			del(my->content);
			free(my);
			my = my->next;
		}
		*lst = NULL;
	}
}

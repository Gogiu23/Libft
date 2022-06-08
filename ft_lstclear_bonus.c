/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:28:24 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/29 21:54:53 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*t;

	temp = *lst;
	while (temp != NULL)
	{
		del(temp->content);
		t = temp->next;
		free(temp);
		temp = t;
	}
	*lst = NULL;
}

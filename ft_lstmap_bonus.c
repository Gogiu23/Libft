/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:45:48 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/25 20:08:29 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_elem;
	t_list	*final_list;

	if (lst != NULL)
	{
		final_list = NULL;
		while (lst != NULL)
		{
			tmp = f(lst->content);
			new_elem = ft_lstnew(tmp);
			if (!new_elem)
			{
				del(tmp);
				ft_lstclear(&final_list, del);
				return (NULL);
			}
			ft_lstadd_back(&final_list, new_elem);
			lst = lst->next;
		}
	}
	else
		return (NULL);
	return (final_list);
}

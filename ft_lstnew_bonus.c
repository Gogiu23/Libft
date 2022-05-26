/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:19:28 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/25 01:41:07 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*book;

	book = (t_list *)malloc(sizeof(t_list) * 1);
	if (!book)
		return (NULL);
	book->content = content;
	book->next = NULL;
	return (book);
}

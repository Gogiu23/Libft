/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:28:20 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/11 21:43:26 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	int		i;

	s = (char *)src;
	d = (char *)dst;
	if (!dst & !src)
		return (0);
	if (d > s)
	{
		i = ((int)len - 1);
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		i = -1;
		while (++i <= (int)len - 1)
			d[i] = s[i];
	}
	return (dst);
}

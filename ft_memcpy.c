/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:42:36 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/11 15:10:15 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d == 0 && s == 0)
		return (dst);
	while (i < (int)n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

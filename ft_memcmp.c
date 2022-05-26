/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:46:25 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/15 17:47:29 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst;
	size_t			i;

	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	i = 0;
	if (n <= 0)
		return (0);
	while (i < n - 1)
	{
		if (dst[i] != src[i])
			return (src[i] - dst[i]);
		i++;
	}
	if (dst[i] == src[i])
		return (0);
	return (src[i] - dst[i]);
}

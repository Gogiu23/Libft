/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:38:56 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/16 18:38:01 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	if (dst[0] != '\0' && src[0] == '\0')
		return ((char *)dst);
	if (dst[0] == '\0' && src[0] == '\0')
		return ((char *)dst);
	if (!dst[0])
		return (NULL);
	else if (src[0] == 0)
		return ("");
	if (*src == 0)
		return ((char *)dst);
	while (ft_strlen(src) <= len)
	{
		if (ft_memcmp(dst, src, ft_strlen(src)) == 0)
			return ((char *)dst);
		dst++;
		len--;
	}
	return (0);
}

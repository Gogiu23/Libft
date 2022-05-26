/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:25:48 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/20 20:22:29 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;

	i = 0;
	if ((unsigned int)ft_strlen(s) < start)
	{
		d = (char *)malloc(sizeof (char));
		if (!d)
			return (0);
		*d = '\0';
		return (d);
	}
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	d = (char *)malloc((len + 1) * sizeof (char));
	if (!d)
		return (NULL);
	while (i < len)
	{
		d[i] = s[start];
		i++;
		start++;
	}
	d[i] = '\0';
	return (d);
}

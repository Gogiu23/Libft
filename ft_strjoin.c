/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:29:08 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/23 23:03:02 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	i;
	size_t	dest;

	dest = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	d = (char *)malloc((dest + 1) * sizeof (char));
	if (!d)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		d[i] = s1[i];
		i++;
	}
	while (i < dest)
	{
		d[i] = *s2;
		i++;
		s2++;
	}
	d[i] = '\0';
	return (d);
}

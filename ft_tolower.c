/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:34:34 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/12 15:51:29 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	str;

	str = (unsigned char)c;
	if (c < 0)
		return (-1);
	if (str >= 65 && str <= 90)
		str = str + 32;
	return ((int)str);
}

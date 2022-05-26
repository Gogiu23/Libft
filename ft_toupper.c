/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:02:18 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/12 15:34:21 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	str;	

	str = (unsigned char)c;
	if (c < 0)
		return (-1);
	if (str >= 97 && str <= 122)
		str = str -32;
	return ((int)str);
}

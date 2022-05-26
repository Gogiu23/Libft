/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 03:56:15 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/24 17:30:53 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_countnbr(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static	char	*ft_doitoa(int n, char *dest, int counter)
{
	int	i;

	i = 0;
	dest = (char *)malloc((counter + 1) * sizeof(char));
	if (dest == 0)
		return (NULL);
	while (n != 0)
	{
		if (n < 0)
		{
			dest[0] = '-';
			n *= -1;
			i++;
		}
		counter--;
		dest[counter] = (n % 10 + '0');
		n /= 10;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	int		counter;
	char	*dest;

	dest = 0;
	counter = ft_countnbr(n);
	if (n == 0)
		dest = ft_strdup("0");
	else if (n == -2147483648)
		dest = ft_strdup("-2147483648");
	else
		dest = ft_doitoa(n, dest, counter);
	return (dest);
}

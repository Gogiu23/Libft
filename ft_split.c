/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:13:47 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/23 23:29:08 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_free(char *dest, char **supdest, int g)
{
	if (!dest)
	{
		while (g > 0)
		{
			g--;
			free(supdest[g]);
		}
		free(supdest);
		return (NULL);
	}
	return (dest);
}

static	size_t	counter_words(const char *str, char c)
{
	size_t	count_words;
	size_t	i;

	i = 0;
	count_words = 0;
	while (str[i] != '\0')
	{
		if (i > 0 && str[i] != c && str[i - 1] == c)
			count_words++;
		if (i == 0 && str[0] != c && str[i] != '\0')
			count_words++;
		i++;
	}
	return (count_words);
}

static char	**ft_domall(const char *s, char c, char **dest)
{
	unsigned int	start;
	size_t			g;
	size_t			i;
	unsigned int	end;

	i = 0;
	g = 0;
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			start = i;
		if (i == 0 && s[0] != c && s[i] != '\0')
			start = 0;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			end = i;
			dest[g] = ft_substr(s, start, (end - start + 1));
			if (ft_free(dest[g], dest, g) == NULL)
				return (0);
			g++;
		}
		i++;
	}
	dest[g] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	counter;

	dest = 0;
	counter = counter_words(s, c);
	dest = (char **)malloc(sizeof(char *) * (counter + 1));
	if (!dest)
		return (NULL);
	dest = ft_domall(s, c, dest);
	return (dest);
}

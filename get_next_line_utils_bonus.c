/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormiere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:52:48 by cormiere          #+#    #+#             */
/*   Updated: 2022/10/13 19:53:10 by cormiere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	full_size;
	int		pos;

	if (!s1 || !s2)
		return (0);
	full_size = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(sizeof(char), (full_size + 1));
	if (!str)
		return (0);
	pos = 0;
	while (*s1)
		str[pos++] = *s1++;
	while (*s2)
		str[pos++] = *s2++;
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = c % 256;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*ptr;
	size_t		sizes;
	size_t		pos;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb * size / nmemb != size)
		return (0);
	sizes = size * nmemb;
	ptr = malloc(sizes);
	pos = 0;
	if (!ptr)
		return (0);
	while (pos < sizes)
	{
		ptr[pos] = 0;
		pos++;
	}
	return ((void *)ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

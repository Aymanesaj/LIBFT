/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:30:42 by asajed            #+#    #+#             */
/*   Updated: 2024/10/26 12:02:51 by asajed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*v;
	size_t	i;
	size_t	j;

	j = 0;
	while (s[j])
		j++;
	if (start >= j)
	{
		v = (char *)malloc(1);
		v[0] = '\0';
		return (v);
	}
	v = (char *)malloc(len + 1);
	if (v == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		v[i] = s[start];
		i++;
		start++;
	}
	v[i] = '\0';
	return (v);
}

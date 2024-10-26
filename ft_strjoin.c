/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:30:24 by asajed            #+#    #+#             */
/*   Updated: 2024/10/26 12:56:28 by asajed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*to_dst;
	const unsigned char	*to_src;

	to_dst = dst;
	to_src = src;
	i = 0;
	while (i < n)
	{
		to_dst[i] = to_src[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	len = i + j;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, i);
	ft_memcpy(str + i, s2, j);
	str[len] = '\0';
	return (str);
}

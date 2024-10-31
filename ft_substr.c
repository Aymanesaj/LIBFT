/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:30:42 by asajed            #+#    #+#             */
/*   Updated: 2024/10/31 17:57:06 by asajed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*v;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		v = (char *)malloc(1);
		if (v)
			v[0] = '\0';
		return (v);
	}
	if (len > s_len - start)
		len = s_len - start;
	v = (char *)malloc(len + 1);
	if (v == NULL)
		return (NULL);
	ft_strlcpy(v, s + start, (len + 1));
	return (v);
}

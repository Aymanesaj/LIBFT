/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:43:43 by asajed            #+#    #+#             */
/*   Updated: 2024/10/29 17:43:47 by asajed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	dsize;

	dsize = count * size;
	s = (void *)malloc(dsize);
	if (s == NULL)
		return (NULL);
	ft_memset (s, 0, dsize);
	return (s);
}

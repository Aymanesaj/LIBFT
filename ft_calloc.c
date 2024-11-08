/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:43:43 by asajed            #+#    #+#             */
/*   Updated: 2024/11/05 16:32:49 by asajed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	s = malloc(count * size);
	if (s == NULL)
		return (NULL);
	ft_bzero (s, count * size);
	return (s);
}
// #include <stdio.h>
// int main() {
//     size_t count = SIZE_MAX; 
//     size_t size = SIZE_MAX;

//     printf("Requested size: %zu\n", size * count); 

//     void *ptr = ft_calloc(count ,size);
//     if (ptr != NULL) {
//         printf("Memory allocated\n");
//     } else {
//         printf("malloc failed\n");
//     }
//     free(ptr);
//     return 0;
// }

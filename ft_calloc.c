/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:00:01 by dde-paul          #+#    #+#             */
/*   Updated: 2025/10/31 23:29:50 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		i;
	size_t		*mem;
	size_t		total_size;
	char		*cbyte;

	if ((nmemb == 0 || size == 0) || nmemb > SIZE_MAX / size)
		return (NULL);
	total_size = nmemb * size;
	mem = (void *)malloc(total_size);
	if (!mem)
		return (NULL);
	cbyte = (char *)mem;
	i = 0;
	while (i < total_size)
	{
		cbyte[i] = 0;
		i++;
	}
	return (mem);
}

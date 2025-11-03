/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-paul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:31:45 by dde-paul          #+#    #+#             */
/*   Updated: 2025/10/31 23:18:09 by dde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_move(unsigned char *d, unsigned const char *s, size_t n)
{
	if (d < (unsigned char *)s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const char			*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const char *)src;
	if (n == 0)
		return (dest);
	ft_move(d, s, n);
	return (dest);
}

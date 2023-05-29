/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:49:32 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/18 09:43:41 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	len;
	size_t	cpy;

	s = ft_strlen(src);
	if (!dst && size == 0)
		return (0);
	len = size;
	while (*dst && len > 0)
	{
		dst++;
		len--;
	}
	d = size - len;
	if (len > 0)
	{
		cpy = len - 1;
		if (s < cpy)
			cpy = s;
		ft_memcpy(dst, src, cpy);
		dst[cpy] = '\0';
	}
	return (d + s);
}

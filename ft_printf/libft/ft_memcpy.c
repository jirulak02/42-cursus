/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:27:37 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/18 11:13:27 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*s;

	i = -1;
	p = dest;
	s = (void *)src;
	if (p == NULL && s == NULL)
		return (NULL);
	while (++i < n)
		p[i] = s[i];
	return (dest);
}

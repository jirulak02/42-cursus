/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:35:51 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/18 11:14:43 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*s;

	i = 0;
	p = dest;
	s = (void *)src;
	if (p == NULL && s == NULL)
		return (NULL);
	if (s < p)
	{
		while (++i <= n)
			p[n - i] = s[n - i];
	}
	else
	{
		i = -1;
		while (++i < n)
			p[i] = s[i];
	}
	return (dest);
}

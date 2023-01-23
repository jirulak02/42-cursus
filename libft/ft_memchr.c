/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:25:31 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/17 11:16:02 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;
	void	*ss;

	i = 0;
	ss = (void *)s;
	p = (void *)s;
	while (i < n)
	{
		if (p[i] == c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}

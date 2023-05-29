/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:05:50 by jsimecek          #+#    #+#             */
/*   Updated: 2023/03/03 14:30:40 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*array;
	void	*p;
	size_t	i;

	if (nelem == 0 || elsize == 0)
	{
		nelem = 1;
		elsize = 1;
	}
	p = NULL;
	array = malloc(nelem * elsize);
	if (!array)
		return (p);
	i = -1;
	while (++i < nelem * elsize)
		array[i] = 0;
	p = array;
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:39:33 by jsimecek          #+#    #+#             */
/*   Updated: 2023/05/29 12:23:17 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_sizeuns_i(unsigned int uns_i)
{
	int	i;

	i = 0;
	while (uns_i)
	{
		uns_i /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoauns_i(unsigned int uns_i)
{
	char	*ptr;
	int		size;

	size = ft_sizeuns_i(uns_i);
	ptr = malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	while (uns_i)
	{
		ptr[size - 1] = uns_i % 10 + '0';
		uns_i /= 10;
		size--;
	}
	return (ptr);
}

int	ft_putuns_i(unsigned int uns_i)
{
	char	*str;
	int		size;

	if (!uns_i)
	{
		write(1, "0", 1);
		return (1);
	}
	str = ft_itoauns_i(uns_i);
	size = ft_putstr(str);
	free(str);
	return (size);
}

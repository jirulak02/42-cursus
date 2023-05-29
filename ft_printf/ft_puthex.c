/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:36:54 by jsimecek          #+#    #+#             */
/*   Updated: 2023/05/29 12:12:13 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_size(unsigned int uns_i)
{
	int	i;

	i = 0;
	while (uns_i)
	{
		uns_i /= 16;
		i++;
	}
	return (i);
}

static char	*ft_to_hex(unsigned int uns_i, char c)
{
	char	*ptr;
	int		size;
	int		i;

	size = ft_hex_size(uns_i);
	ptr = malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	while (uns_i)
	{
		i = uns_i % 16;
		if (i < 10)
			ptr[size - 1] = i + '0';
		else
			ptr[size - 1] = i + c;
		uns_i /= 16;
		size--;
	}
	return (ptr);
}

int	ft_puthex(unsigned int uns_i, char c)
{
	char	*str;
	int		size;

	if (!uns_i)
	{
		write (1, "0", 1);
		return (1);
	}
	if (c == 'X')
		c = 55;
	else
		c = 87;
	str = ft_to_hex(uns_i, c);
	size = ft_putstr(str);
	free(str);
	return (size);
}

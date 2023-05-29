/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:10:17 by jsimecek          #+#    #+#             */
/*   Updated: 2023/05/29 12:18:55 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_size(uintptr_t uns_l_i)
{
	int	i;

	i = 0;
	while (uns_l_i)
	{
		uns_l_i /= 16;
		i++;
	}
	return (i);
}

static char	*ft_to_hex(uintptr_t uns_l_i)
{
	char	*ptr;
	int		size;
	int		i;

	size = ft_hex_size(uns_l_i);
	ptr = malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	while (uns_l_i)
	{
		i = uns_l_i % 16;
		if (i < 10)
			ptr[size - 1] = i + '0';
		else
			ptr[size - 1] = i + 87;
		uns_l_i /= 16;
		size--;
	}
	return (ptr);
}

int	ft_putptr(uintptr_t uns_l_i)
{
	char	*s;
	int		size;

	size = 0;
	s = NULL;
	if (!uns_l_i)
	{
		s = "(nil)";
		ft_putstr_fd(s, 1);
		return (ft_strlen(s));
	}
	size += write (1, "0x", 2);
	s = ft_to_hex(uns_l_i);
	size += ft_putstr(s);
	free(s);
	return (size);
}

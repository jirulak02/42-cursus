/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:27:42 by jsimecek          #+#    #+#             */
/*   Updated: 2023/05/29 12:04:47 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_paramtype(va_list args, char c)
{
	int	size;

	size = 0;
	if (c == 'c')
		size = ft_putchar(va_arg(args, int));
	else if (c == 's')
		size = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		size = ft_putptr(va_arg(args, uintptr_t));
	else if (c == 'i' || c == 'd')
		size = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		size = ft_putuns_i(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		size = ft_puthex(va_arg(args, unsigned int), c);
	else if (c == '%')
		size = ft_putchar('%');
	return (size);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		size;
	int		i;

	i = -1;
	size = 0;
	va_start (args, str);
	while (str[++i])
	{
		if (str[i] == '%')
			size += ft_paramtype(args, str[i++ + 1]);
		else
			size += ft_putchar(str[i]);
	}
	va_end(args);
	return (size);
}

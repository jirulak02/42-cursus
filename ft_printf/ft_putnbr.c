/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:38:36 by jsimecek          #+#    #+#             */
/*   Updated: 2023/05/26 14:54:05 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int i)
{
	char	*str;
	int		size;

	str = ft_itoa(i);
	size = ft_putstr(str);
	free(str);
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:21:42 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/18 16:02:09 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_check_min(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		str = malloc(12 * sizeof(char));
		if (!str)
			return (NULL);
		str = "-2147483648";
		return (str);
	}
	return (NULL);
}

char	*ft_convert(char *str, int n, int sign, int len)
{
	if (sign == -1)
		len++;
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		if (sign == -1 && len == 0)
			str[0] = '-';
		else
		{
			str[len] = n % 10 + 48;
			n = n / 10;
		}
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*str;

	i = 0;
	sign = 1;
	str = ft_check_min(n);
	if (str != NULL)
		return (str);
	if (n < 0)
	{
		n = n * -1;
		str = malloc((ft_int_len(n) + 2) * sizeof(char));
		sign = -1;
	}
	else
		str = malloc((ft_int_len(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = ft_convert(str, n, sign, ft_int_len(n));
	return (str);
}

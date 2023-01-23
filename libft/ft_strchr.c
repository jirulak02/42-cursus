/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:04:12 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/17 11:22:50 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = -1;
	str = (void *)s;
	while (s[++i])
	{
		if (s[i] == c)
			return (&str[i]);
	}
	if (c == '\0' && s[i] == '\0')
		return (&str[i]);
	return (NULL);
}

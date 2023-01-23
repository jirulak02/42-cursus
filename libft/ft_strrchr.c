/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:13:45 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/17 11:26:34 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	char	*str;

	i = 0;
	p = NULL;
	str = (char *)s;
	while (s[i])
	{
		if (s[i] == c)
			p = &str[i];
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		p = &str[i];
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:08:30 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/13 11:56:35 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	p = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!p)
		return (NULL);
	i = -1;
	while (s[++i])
		p[i] = s[i];
	p[i] = '\0';
	return (p);
}

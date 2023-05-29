/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:55:57 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/18 13:25:59 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = -1;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	j = ft_strlen(s1);
	k = ft_strlen(s2);
	str = malloc((j + k + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (++i < j)
		str[i] = s1[i];
	i = -1;
	while (++i < k)
		str[j + i] = s2[i];
	str[j + i] = '\0';
	return (str);
}

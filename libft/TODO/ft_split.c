/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:19:27 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/18 14:07:09 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**str;

	i = -1;
	count = 0;
	while (s[++i])
	{
		if (s[i] == c)
			count++;
	}
	str = malloc((ft_strlen(s) - count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	//TODO
}

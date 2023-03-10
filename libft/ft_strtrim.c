/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:42:28 by jsimecek          #+#    #+#             */
/*   Updated: 2023/03/03 10:31:32 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_str(char *s1, char c)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str1;
	char	*st;

	if (s1 == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	i = 0;
	str1 = (char *)s1;
	st = (char *)set;
	while (ft_is_in_str(st, str1[start]) == 1)
		start++;
	while (ft_is_in_str(st, str1[end - 1]) == 1)
		end--;
	if ((end - start) <= 0)
		return (ft_substr("", 2, 2));
	return (ft_substr(s1, start, end - start));
}

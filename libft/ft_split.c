/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:19:27 by jsimecek          #+#    #+#             */
/*   Updated: 2023/02/23 09:52:58 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_malloc(char **final_s, int j)
{
	while (j-- > 0)
		free(final_s[j]);
	free(final_s);
	return (0);
}

static int	ft_count_w(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static char	*ft_put_w(char *w, char const *s, int i, int w_len)
{
	int	j;

	j = 0;
	while (w_len > 0)
		w[j++] = s[i - w_len--];
	w[j] = '\0';
	return (w);
}

static char	**ft_split_w(char const *s, char c, char **final_s, int w_count)
{
	int	i;
	int	j;
	int	w_len;

	i = 0;
	j = 0;
	while (j < w_count)
	{
		w_len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			w_len++;
		}
		final_s[j] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!final_s)
			return (ft_free_malloc(final_s, j));
		ft_put_w(final_s[j], s, i, w_len);
		j++;
	}
	final_s[j] = 0;
	return (final_s);
}

char	**ft_split(char const *s, char c)
{
	char	**final_s;
	int		w_count;

	if (!s)
		return (NULL);
	w_count = ft_count_w(s, c);
	final_s = (char **)malloc(sizeof(char *) * (w_count + 1));
	if (!final_s)
		return (NULL);
	final_s = ft_split_w(s, c, final_s, w_count);
	return (final_s);
}

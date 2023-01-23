/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:18:47 by jsimecek          #+#    #+#             */
/*   Updated: 2023/01/17 11:09:46 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	printf("%d\n", ft_atoi("-452"));
	printf("%d\n", ft_atoi("\t\n\r\v\f  469 \n"));
	printf("%d\n", ft_atoi("  -+-54v54"));
	printf("%d\n", ft_atoi("  -+ -54v54"));
	return (0);
}

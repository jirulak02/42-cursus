/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <jsimecek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:27:18 by jsimecek          #+#    #+#             */
/*   Updated: 2023/05/29 12:35:34 by jsimecek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "./libft/libft.h"

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int i);
int		ft_putptr(uintptr_t u);
int		ft_puthex(unsigned int uns_i, char c);
int		ft_putuns_i(unsigned int uns_i);

#endif

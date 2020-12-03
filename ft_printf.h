/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 20:16:52 by edbarbos          #+#    #+#             */
/*   Updated: 2020/12/03 11:03:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>


typedef struct s_flags {
	int		len;
	int		width;
	int		prec;
	int		star;
	int		minus;
	int 	zero;
	char	conversion;
}				t_flags;

int ft_printf(const char *, ...);

int ft_putchar_ret(char c);

void init_flags(t_flags *flags);

int	ft_isdigit(int c);

void    readingflag(t_flags *flags, const char str);

int     readflag(t_flags *flags, const char *str);

int     ft_isconversion(t_flags *flags, va_list args);

int     ft_printf_c(t_flags *flags, va_list args);

void	ft_printf_star(t_flags *flags, va_list args);

int		ft_printf_s(t_flags *flags, va_list args);

int		ft_printf_x(t_flags *flags, va_list args);

int		ft_printf_d(t_flags *flags, va_list args);

#endif

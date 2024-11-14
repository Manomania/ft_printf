/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:03:11 by maximart          #+#    #+#             */
/*   Updated: 2024/11/11 13:05:26 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_format
{
	char	conversion;
}	t_format;

int		ft_putnbr(int n);
int		ft_handle_char(int c);
int		ft_handle_percent(void);
int		ft_putchar(const char c);
int		ft_putstr(const char *str);
int		ft_putptr(unsigned long ptr);
int		ft_handle_str(const char *str);
int		ft_printmemory(unsigned long n);
int		ft_handle_ptr(unsigned long ptr);
int		ft_printf(const char *format, ...);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_handle_int(int n);
int		ft_puthexa(unsigned int n, int upper);
int		ft_handle_nbr_unsigned(unsigned int n);
int		ft_check_args(t_format fmt, va_list args);
int		ft_handle_hexa(unsigned int n, t_format fmt);
void	parse_format(const char **format, t_format *fmt);

#endif

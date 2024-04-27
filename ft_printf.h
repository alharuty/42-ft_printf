/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                       :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:31:04 by allharut          #+#    #+#             */
/*   Updated: 2024/04/24 19:27:51 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

# define HEX_BASE "0123456789abcdef"
# define HEX_BASE_UP "0123456789ABCDEF"
# define NULL_PTR "0x0"
# define NULL_STR "(null)"

int			ft_printf(char const *format, ...);
int			handle_hex_format(unsigned int res);
int			handle_hex_upper_format(unsigned int res);
int			handle_int_format(va_list args, char format);
int			handle_str_format(va_list args, char format);
int			ft_printf_ptr(int *ptr);
int			format_identification(char const *format, int len, va_list args);
size_t		ft_putchar_fd(char c);
int			ft_putnbr_fd(int n);
int			ft_putstr_fd(char *s);
int			my_hexadecimal(va_list args, char format);
size_t		ft_putptr(void *p);
size_t		ft_putchar_fd(char c);
int			ft_putnbru_fd(unsigned int n);

#endif

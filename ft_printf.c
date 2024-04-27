/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:11:17 by allharut          #+#    #+#             */
/*   Updated: 2024/04/24 19:13:23 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_identification(char const *format, int len, va_list args)
{
	char	percent;

	percent = '%';
	len = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'i' || *format == 'd' || *format == 'u')
				len += handle_int_format(args, *format);
			else if (*format == 's' || *format == 'c')
				len += handle_str_format(args, *format);
			else if (*format == 'p')
				len += ft_putptr(va_arg(args, void *));
			else if (*format == '%')
				len += write(1, &percent, 1);
			else if (*format == 'x' || *format == 'X')
				len += my_hexadecimal(args, *format);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	len = format_identification(format, len, args);
	va_end(args);
	return (len);
}
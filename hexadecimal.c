/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:29:14 by allharut          #+#    #+#             */
/*   Updated: 2024/04/24 19:24:12 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	my_hexadecimal(va_list args, char format)
{
	if (format == 'x')
		return (handle_hex_format(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (handle_hex_upper_format(va_arg(args, unsigned int)));
	return (0);
}

int	handle_hex_format(unsigned int res)
{
	int		contador;
	char	hex[32];
	int		i;

	i = 0;
	contador = 0;
	if (res == 0)
		hex[i++] = HEX_BASE[0];
	while (res != 0)
	{
		hex[i++] = HEX_BASE[res % 16];
		res /= 16;
	}
	while (i > 0)
	{
		ft_putchar_fd(hex[--i]);
		contador++;
	}
	return (contador);
}

int	handle_hex_upper_format(unsigned int res)
{
	int		contador;
	char	hex[32];
	int		i;

	i = 0;
	contador = 0;
	if (res == 0)
		hex[i++] = HEX_BASE_UP[0];
	while (res != 0)
	{
		hex[i++] = HEX_BASE_UP[res % 16];
		res /= 16;
	}
	while (i > 0)
	{
		ft_putchar_fd(hex[--i]);
		contador++;
	}
	return (contador);
}

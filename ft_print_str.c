/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:11:17 by allharut          #+#    #+#             */
/*   Updated: 2024/04/24 19:08:13 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_str_format(va_list args, char format)
{
	if (format == 's')
		return (ft_putstr_fd(va_arg(args, char *)));
	return (ft_putchar_fd(va_arg(args, unsigned int)));
}

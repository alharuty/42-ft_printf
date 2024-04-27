/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:11:17 by allharut          #+#    #+#             */
/*   Updated: 2024/04/24 19:06:22 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_int_format(va_list args, char format)
{
	if (format == 'i' || format == 'd')
		return (ft_putnbr_fd(va_arg(args, int)));
	return (ft_putnbru_fd(va_arg(args, int)));
}

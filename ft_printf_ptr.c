/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:11:17 by allharut          #+#    #+#             */
/*   Updated: 2024/04/24 19:14:25 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_writeptr(size_t num)
{
	size_t	size;

	size = 0;
	if (num > 0)
	{
		size = ft_writeptr(num / 16);
		if (num < 16)
			size += ft_putstr_fd("0x");
		size += ft_putchar_fd(HEX_BASE[num % 16]);
	}
	return (size);
}

size_t	ft_putptr(void *p)
{
	size_t	pointer;
	size_t	len;

	len = 0;
	if (!p)
	{
		len += ft_putstr_fd(NULL_PTR);
		return (len);
	}
	pointer = (size_t) p;
	len += ft_writeptr(pointer);
	return (len);
}

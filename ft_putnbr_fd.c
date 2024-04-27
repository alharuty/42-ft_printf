/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:56:24 by allharut          #+#    #+#             */
/*   Updated: 2024/04/24 19:17:12 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n)
{
	int	contador;

	contador = 0;
	if (n == -2147483648)
	{
		contador += ft_putchar_fd('-');
		contador += ft_putchar_fd('2');
		contador += ft_putnbr_fd(147483648);
	}
	else
	{
		if (n < 0)
		{
			contador += ft_putchar_fd('-');
			n = n * -1;
		}
		if (n > 9)
			contador += ft_putnbr_fd(n / 10);
		contador += ft_putchar_fd((n % 10) + '0');
	}
	return (contador);
}

int	ft_putnbru_fd(unsigned int n)
{
	int	contador;

	contador = 0;
	if (n > 9)
		contador += ft_putnbru_fd(n / 10);
	contador += ft_putchar_fd((n % 10) + '0');
	return (contador);
}

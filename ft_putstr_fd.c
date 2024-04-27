/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:32:34 by allharut          #+#    #+#             */
/*   Updated: 2024/02/13 18:39:21 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		s = NULL_STR;
	while (s && s[i])
		ft_putchar_fd(s[i++]);
	return (i);
}

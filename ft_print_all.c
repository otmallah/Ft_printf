/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:52:25 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/21 18:52:26 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_all(char r, va_list po)
{
	int	a;

	a = 0;
	if (r == 'd' || r == 'i')
		a = decimal(po);
	else if (r == 's')
		a = putstr(po);
	else if (r == 'u')
		a = ft_put_unsigned_nbr_fd(po);
	else if (r == 'p')
		a = print_address(po);
	else if (r == 'x')
		a = convert_hex_low(po);
	else if (r == '%')
		a = percent();
	else if (r == 'c')
		a = print_char(po);
	else if (r == 'X')
		a = convert_hex_upp(po);
	return (a);
}

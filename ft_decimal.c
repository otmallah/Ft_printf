/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_base10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:25:03 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/19 20:25:04 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	decimal(va_list ap)
{
	int	num;
	int	i;

	num = va_arg(ap, int);
	i = ft_count_int(num);
	ft_putnbr_fd(num, 1);
	return (i);
}

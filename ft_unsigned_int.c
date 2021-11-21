/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:04:53 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/19 20:04:56 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbr_fd(va_list num)
{
	int		i;
	unsigned int	t;

	t = va_arg(num, unsigned int);
	i = ft_count_unsi(t);
	if (t >= 10)
	{
		ft_putnbr_fd(t / 10, 1);
		ft_putnbr_fd(t % 10, 1);
	}
	else if (t >= 0)
	{
		ft_putchar_fd(t + 48, 1);
	}
	return i;
}

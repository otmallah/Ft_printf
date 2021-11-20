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

void	ft_put_unsigned_nbr_fd(va_list num, int fd)
{
	unsigned int	t;


	t = va_arg(num , unsigned int);
	if (t >= 10)
	{
		ft_putnbr_fd(t / 10, fd);
		ft_putnbr_fd(t % 10, fd);
	}
	else if (t >= 0)
	{
		ft_putchar_fd(t + 48, fd);
	}
}
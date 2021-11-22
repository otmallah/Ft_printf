/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:59:56 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/19 19:59:58 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_address(va_list nu)
{
	t_pri	idx;

	idx.i = 0;
	idx.s = "0123456789abcdef";
	ft_putstr_fd("0x", 1);
	idx.number = va_arg(nu, void *);
	idx.k = (size_t)idx.number;
	if (idx.k == 0)
	{
		ft_putchar_fd('0', 1);
		return (3);
	}
	while (idx.k)
	{
		idx.tab[idx.i++] = idx.s[idx.k % 16];
		idx.k = idx.k / 16;
	}
	idx.tab[idx.i] = '\0';
	idx.i = ft_strlen(idx.tab) - 1;
	while (idx.i >= 0)
	{
		ft_putchar_fd(idx.tab[idx.i], 1);
		idx.i--;
	}
	return ((ft_strlen(idx.tab) + 2));
}

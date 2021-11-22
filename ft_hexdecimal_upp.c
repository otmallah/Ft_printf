/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdecimal_upp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:25:48 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/20 22:25:49 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_hex_upp(va_list list)
{
	t_hex_upp	index;

	index.i = 0;
	index.s = "0123456789ABCDEF";
	index.num = va_arg(list, int);
	if (index.num == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	if (index.num > 0)
		index.n = (unsigned long long)index.num;
	if (index.num < 0)
		index.n = (unsigned int)index.num;
	while (index.n)
	{
		index.tab[index.i] = index.s[index.n % 16];
		index.n /= 16;
		index.i++;
	}
	index.tab[index.i] = '\0';
	index.j = ft_strlen(index.tab);
	while (--index.j >= 0)
		ft_putchar_fd(index.tab[index.j], 1);
	return (ft_strlen(index.tab));
}

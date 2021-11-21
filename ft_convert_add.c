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
#include <stdio.h>

int	print_address(va_list nu)
{
	int		i;
	size_t	k;
	char	*s;
	int		pok;
	char	tab[100];
	void	*number;

	i = 0;
	s = "0123456789abcdef";
	ft_putstr_fd("0x", 1);
	number = va_arg(nu, void *);
	k = (size_t)number;
	if (k == 0)
		return (1);
	while (k)
	{
		tab[i] = s[k % 16];
		k = k / 16;
		i++;
	}
	tab[i] = '\0';
	pok = ft_strlen(tab) - 1;
	while (pok >= 0)
	{
		ft_putchar_fd(tab[pok], 1);
		pok--;
	}
	return ((ft_strlen(tab) + 2));
}

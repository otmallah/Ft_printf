/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:53:52 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/19 14:53:53 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int		a;
	int		i;
	int		j;

	i = 0;
	j = 0;
	a = 0;
	va_start (lst, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			a = a + print_all(str[i + 1], lst);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			j++;
		}
		i++;
	}
	va_end(lst);
	return (a + j);
}

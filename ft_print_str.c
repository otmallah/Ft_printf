/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 22:03:12 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/19 22:03:13 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putstr(va_list las)
{
	char	*res;
	int		i;

	i = 0;
	res = va_arg(las, char *);
	if (res == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
		ft_putstr_fd(res, 1);
		i = ft_strlen(res);
	return (i);
}

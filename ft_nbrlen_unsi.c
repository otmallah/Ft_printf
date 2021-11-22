/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_unsi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:58:05 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/20 22:58:07 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_unsi(int numb)
{
	unsigned int	t;
	int				i;

	i = 0;
	t = (unsigned int)numb;
	if (t == 0)
		i = 1;
	while (t != 0)
	{
		t /= 10;
		i++;
	}
	return (i);
}

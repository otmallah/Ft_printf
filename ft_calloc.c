/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:15:47 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/01 18:15:49 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t n, size_t c)
{
	void		*str;
	size_t		i;

	i = 0;
	str = malloc(n * c);
	if (str == 0)
		return (NULL);
	while (i < (n * c))
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}

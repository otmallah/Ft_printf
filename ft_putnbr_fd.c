/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:11:31 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/04 12:11:32 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	t;

	t = (long)n;
	if (t < 0)
	{
		ft_putchar_fd('-', fd);
		t *= -1;
	}
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

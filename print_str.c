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

#include "libft.h"
#include "ft_printf.h"

int putstr(va_list las)
{
    char *res;

    res = va_arg(las, char *);
    ft_putstr_fd(res, 1);
    return (1);
}
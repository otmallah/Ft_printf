/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 22:01:16 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/19 22:01:18 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int    print_char(va_list lis)
{
    char c;

    c =  va_arg(lis , int);
    ft_putchar_fd(c, 1);
    return 1;
}
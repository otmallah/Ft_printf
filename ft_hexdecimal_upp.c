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

int    convert_hex_upp(va_list list)
{
    int     i;
    int     num;
    int     j;
    long    n;
    char    *s;
    char    tab[100];

    i = 0;
    s = "0123456789ABCDEF";
    num = va_arg(list, int);
    if (num == 0)
    {
        ft_putchar_fd('0' , 1);
        return 1;
    }
    if (num > 0)
        n = (unsigned long long)num;
    if (num < 0)
        n = (unsigned int)num;
    while (n)
    {
        tab[i] = s[n % 16];
        n /= 16;
        i++;
    }
    tab[i] = '\0'; 
    j = ft_strlen(tab) - 1;
    while (j >= 0)
    {
        ft_putchar_fd(tab[j], 1);
        j--;
    }
    return (ft_strlen(tab));
}
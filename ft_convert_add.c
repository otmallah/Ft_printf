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

#include "libft.h"
#include "ft_printf.h"

char	*string_to_convert(va_list nu)
{
    long number;
    int pok;
    int         i;
    char tab[100];
    char *s;


    i = 0;
    s = "0123456789abcdef";
    number = va_arg(nu, long);
    while (number != 0)
    {
        tab[i] = s[number % 16];
        number = number / 16;
        i++;
    }
    tab[i] = '\0';
    pok = ft_strlen(tab) - 1;
    ft_putstr_fd("0x" , 1);
    while (pok >= 0)
    {
        ft_putchar_fd(tab[pok] , 1);
        pok--;
    }
    return tab;
}

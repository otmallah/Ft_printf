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

#include  <stdarg.h>
#include "ft_printf.h"

void    prt(const char *st , int v)
{
    if ((st[v] != '%' && (st[v + 1] != 'x' || st[v + 1] != 'c' || st[v + 1] != 's' || st[v + 1] != 'p' 
        || st[v + 1] != 'i' || st[v + 1] != 'X' || st[v + 1] != 'd')))
        ft_putchar_fd(st[v], 1);
    else
        v += 1;
}

int ft_printf(const char *str, ...)
{
    va_list lst;
    int a;
    int i;
    int j;

    i = 0;
    j = 0;
    a = 0;
    va_start (lst, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            a += print_all(str[i + 1], lst);
            i++;
        }
        else
        {
            write(1, &str[i], 1);
            j++;
        }
        i++;
    }
	return (a + j);
}

// #include <stdio.h>
// #include <limits.h>

// int main(void)
// {
//     //int i , j;

//     ft_printf("%p   ,    %p" , 0,0);
// }
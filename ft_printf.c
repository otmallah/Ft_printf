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
        ft_putchar_fd(st[v] , 1);
    else
        v += 1;
}

int ft_printf(const char *str, ...)
{
    va_list lst;
    int i;
    int j;

    i = 0;
    j = 0;
    va_start (lst, str);
    while (str[i])
    {
        while (str[i] == '%')
        {
            i++;
            if (str[i] == 'd' || str[i] == 'i')
            {
                i++;
                decimal(lst);
            }
            else if (str[i] == 'c')
            {
                i++;
                print_char(lst);
            }   
            else if (str[i] == '%')
            {
                i++;
                ft_putchar_fd('%', 1);
            }
            else if (str[i] == 's')
            {
                i++;
                putstr(lst);
            }
            else if (str[i] == 'u')
            {
                i++;
                ft_put_unsigned_nbr_fd(lst , 1);
            }
            else if (str[i] == 'p')
            {
                i++;
                string_to_convert(lst);
            }
        }
        prt(str , i);
        //ft_putchar_fd(str[i], 1);
        i++;
    }
}

int main(void)
{
   int a = 24775;
   char b = 'd';
   char str[] = "this is my str 5555 5555 55555 5555 555 55 55 55 5 55 5 55 5 55";
   unsigned int g = -364554464;
   char sp[] = "24422624";

    int i = -368736876;

   ft_printf("%d --> %c  -->  %s  -->  %u  -->%p -->  %i \n" , a , b , str, g , sp , i);
   // printf("%d%c%s%u%p%i" , a , b , str , g  ,  sp , i);
}
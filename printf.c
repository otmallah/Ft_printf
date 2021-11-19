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
#include "libft.h"
#include "ft_printf.h"


t_print *mystruct()
{
    static t_print abc;

    return (&abc);
}

int num_arg(char *st)
{
    int i;
    int a;

    i = 0;
    a = 0;
    while (st[i])
    {
        if (st[i] == '%' && st[i + 1] == 'c')
            a++;
        else if (st[i] == '%' && st[i + 1] == 'd')
            a++;
        else if (st[i] == '%' && st[i + 1] == 's')
            a++;
        else if (st[i] == '%' && st[i + 1] == 'p')
            a++;
        else if (st[i] == '%' && st[i + 1] == 'x')
            a++;
        else if (st[i] == '%' && st[i + 1] == 'X')
            a++;
        else if (st[i] == '%' && st[i + 1] == 'u')
            a++;
        else if (st[i] == '%' && st[i + 1] == 'i')
            a++;
        else if (st[i] == '%' && st[i + 1] == '%')
            a++;
        i++;
    }
    return a;
}

int ft_printf(const char *str, ...)
{
    va_list lst;
    int i;
    int j;
    int num;
    int coun;
    t_print *abc;

    abc = mystruct();

    i = 0;
    j = 0;
    va_start (lst, str);
    coun = num_arg((char *)str);
    while (str[i])
    {
        if (str[i] == '%' && str[i + 1] == 'd')
        {
            i +=2;
            decimal(lst);
        }
        else if (str[i] == '%' && str[i + 1] == 'c')
        {
            i += 2;
            print_char(lst);
        }
        else if (str[i] == '%' && str[i + 1] == '%')
        {
            i += 2;
            ft_putchar_fd('%', 1);
        }
        else if (str[i] == '%' && str[i + 1] == 's')
        {
            i += 2;
            putstr(lst);
        }
        else if (str[i] == '%' && str[i + 1] == 'u')
        {
            i += 2;
            ft_put_unsigned_nbr_fd(lst , 1);
        }
        else if (str[i] == '%' && str[i + 1] == 'p')
        {
            i += 2;
            string_to_convert(lst);
        }
        ft_putchar_fd(str[i] , 1);
        i++;
    }
}

int main(void)
{
   int a = 24775;
   char b = 'd';
   char str[] = "this is my str 5555 5555 55555 5555 555 55 55 55 5 55 5 55 5 55  ";
   unsigned int g = -364554464;
   char sp[] = "24422624";


   ft_printf("int : %d ---> char :  %c ---> char * : %s ---> unsigned int : %u  %p \n" , a , b , str, g , sp);
   printf("int : %d ---> char :  %c ---> char * : %s ---> unsigned int : %u     %p" , a , b , str , g  ,  sp);
}
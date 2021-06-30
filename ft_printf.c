/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunczer <agunczer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:08:55 by agunczer          #+#    #+#             */
/*   Updated: 2021/06/29 17:14:51 by agunczer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"
#include "libft/libft.h"

int ft_printf(const char *str, ...)
{
    va_list ap;
    void *arg;

    va_start(ap, str);
    while (*str != '\0')
    {
        if (*str == '%')
        {
            arg = va_arg(ap, void*);
            ft_detertype(str, arg);
            str++;
        }
        else
            ft_putchar_fd(*str, 1);
        str++;
    }
    return (1);
}
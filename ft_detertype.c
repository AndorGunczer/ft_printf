/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detertype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunczer <agunczer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:30:54 by agunczer          #+#    #+#             */
/*   Updated: 2021/06/30 17:05:01 by agunczer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"
#include "libft/libft.h"

void    ft_detertype(const char *str, void *arg)
{
    str++;
    if (*str == 'c')
        ft_putchar_fd((char)arg, 1);
    else if (*str == 's')
        ft_putstr_fd((char *)arg, 1);
    else if (*str == 'p')
        ft_puthexpointer_fd((long)arg, 1);
    else if (*str == 'd' || *str == 'i')
        ft_putnbr_fd((int)arg, 1);
    else if (*str == 'x')
        ft_puthexlower_fd((int)arg, 1);
    else if (*str == 'X')
        ft_puthexupper_fd((int)arg, 1);
    else if (*str == 'u')
        ft_putunsnbr_fd((unsigned int)arg, 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handletype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunczer <agunczer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:30:54 by agunczer          #+#    #+#             */
/*   Updated: 2021/07/02 11:25:45 by agunczer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"
#include "libft/libft.h"

void    ft_handletype(const char *str, void *arg, int *i)
{
    (*i)++;
    if (*(str + *i) == 'c')
        ft_putchar_fd((char)arg, 1);
    else if (*(str + *i) == 's')
        ft_putstr_fd((char *)arg, 1);
    else if (*(str + *i) == 'p')
        ft_puthexpointer_fd((long)arg, 1);
    else if (*(str + *i) == 'd' || *str == 'i')
        ft_putnbr_fd((int)arg, 1);
    else if (*(str + *i) == 'x')
        ft_puthexlower_fd((int)arg, 1);
    else if (*(str + *i) == 'X')
        ft_puthexupper_fd((int)arg, 1);
    else if (*(str + *i) == 'u')
        ft_putunsnbr_fd((unsigned int)arg, 1);
}
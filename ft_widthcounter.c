/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_widthcounter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunczer <agunczer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 09:40:11 by agunczer          #+#    #+#             */
/*   Updated: 2021/07/02 11:36:54 by agunczer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_widthcounter(char *str, void *arg, int *i)
{
    char type;
    int width;

    type = ft_detertype(str, arg, i);
    if (type == 's')
        width = ft_strlen(arg);
    if (type == 'c')
        width = 1;
    if (type == 'd' || type == 'i')
        width = ft_strlen(ft_itoa_long((long)arg));
    if (type == 'p')
        width = 2 + ft_strlen(ft_itoa_long(arg));
    if (type == 'u')
        width = ft_strlen(ft_itoa_long((unsigned int)arg));
    return (width);
}

/* You have to create ft_itoa_hex() in order to handle x, X types */
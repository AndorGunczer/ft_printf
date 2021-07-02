/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deterprec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunczer <agunczer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:55:52 by agunczer          #+#    #+#             */
/*   Updated: 2021/07/02 13:14:43 by agunczer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int ft_deterprec(char *str, int *i)
{
    if (*(str + *i) == '.')
        return (ft_atoi(str + *i));
    else
        return (0);
}
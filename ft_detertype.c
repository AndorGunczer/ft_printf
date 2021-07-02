/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detertype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunczer <agunczer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:26:13 by agunczer          #+#    #+#             */
/*   Updated: 2021/07/02 11:51:02 by agunczer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int  ft_isformat(char *str);

char    ft_detertype(const char *str, void *arg, int *i)
{
    int counter;

    counter = *i;
    while(*(str + counter) != isformat(*(str + counter)))
        counter++;
    if (*(str + *i) == 'c')
        return ('c');
    else if (*(str + *i) == 's')
        return ('s');
    else if (*(str + *i) == 'p')
        return ('p');
    else if (*(str + *i) == 'd')
        return ('d');
    else if (*(str + *i) == 'i')
        return ('i');
    else if (*(str + *i) == 'x')
        return ('x');
    else if (*(str + *i) == 'X')
        return ('X');
    else if (*(str + *i) == 'u')
        return ('u');
}

static int  ft_isformat(char *str)
{
    if (*str == 'd' || *str == 'i' || *str == 'c' || *str == 's' || *str == 'u'
    || *str == 'p' || *str == 'x' || *str == 'X')
        return (1);
    else
        return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spechandle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunczer <agunczer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:57:30 by agunczer          #+#    #+#             */
/*   Updated: 2021/07/02 11:54:38 by agunczer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void    ft_spechandle(char *str, void *arg, int *i)
// {
//     int blanks;
//     int flag;
//     int prec;

//     (*i)++;
//     if (contains_flag((str + *i), '-') == 1)
//         flag = 1;
//     else if (contains_flag((str + *i), '0') == 1)
//         flag = 2;
//     while (*(str + *i) != '.' && ft_isdigit(*(str + *i)) != 1 && ft_isformat(*(str + *i)) != 1)
//         (*i)++;
//     blanks = ft_atoi(*(str + *i));
//     while (*(str + *i) != '.' && ft_isformat(*(str + *i)) != 1)
//         (*i)++;
//     if (*(str + *i) == '.')
//         prec = ft_prechandle();
    
// }

void    ft_spechandle(char *str, void *arg, int *i)
{
    int flags;
    int field_width;
    int width;

    flags = ft_flaghandle((str + *i), arg, i);
    field_width = ft_atoi((str + *i));
    width = ft_widthhandle(str, arg, i);
    
}
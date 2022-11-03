/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:27:53 by slampine          #+#    #+#             */
/*   Updated: 2022/10/26 14:36:32 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(char *str, int c)
{
    int end;
    char *rv;
    char d;

    end = 0;
    rv = (void *)0;
    d = c;
    while(end == 0)
    {
        if(*str == d)
        {
            end = 1;
            *rv = *str;
        }
        if(*str == '\0')
            end = 1;
        str++;
    }
    return (rv);
}
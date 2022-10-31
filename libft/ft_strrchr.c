/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:21:18 by slampine          #+#    #+#             */
/*   Updated: 2022/10/25 14:21:23 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(char *str, int c)
{
    int stop;
    char *rv;
    char d;
    int end;

    stop = 0;
    rv = (void *)0;
    d = c;
    end = 0;
    while(*str != '\0')
        {
            str++;
            end++;
        }
    while(stop == 0)
    {
        if(*str == d)
        {
            stop = 1;
            rv = str;
        }
        if(end == 0)
            stop = 1;
        str--;
        end--;
    }
    return (rv);
}
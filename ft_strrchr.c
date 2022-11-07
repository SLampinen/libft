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

char *ft_strrchr(const char *str, int c)
{
    int stop;
    char *rv;
    char d;
    int end;
    char *s;

    d = c;
    s = (char *)str;
    rv = (void *)0;
    end = 0;
    stop = 0;
    while(*s != '\0')
        {
            s++;
            end++;
        }
    while(stop == 0)
    {
        if(*s == d)
        {
            stop = 1;
            rv = s;
        }
        if(end == 0)
            stop = 1;
        s--;
        end--;
    }
    return (rv);
}
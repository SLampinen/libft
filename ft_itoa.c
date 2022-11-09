/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:31:12 by slampine          #+#    #+#             */
/*   Updated: 2022/11/02 15:31:14 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_itoa(int n)
{
    char *str;
    int count;
    unsigned int temp;
    int sign;
    int ismin;

    ismin = 0;
    count = 0;
    sign = 0;
    temp = n;
    if(n < 0)
    {
        sign = -1;
        if(n != 0 && ((sign * n) == n))
            ismin = 1;
        count++;
        n = sign * (n + ismin);
        temp = n;
    }  
    while(temp > 9)
    {
        temp = temp / 10;
        count++;
    }
    if(!(str = malloc(count + 1)))
        return(NULL);   
    str[count + 1] = '\0';
    if(sign == -1)
        str[0] = '-';
    while(count + sign >= 0)
    {
        str[count] = n % 10 + '0';
        if(ismin && count == 10)
            str[count] = 8 + '0';
        count--;
        temp = n % 10;
        n = (n - temp) / 10;
    }
    return(str);
}
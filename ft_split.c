/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:32:39 by slampine          #+#    #+#             */
/*   Updated: 2022/11/03 14:32:41 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
void  array_zero(char **str, int len)
{
    char **c = str;

    while(len-- > 0)
        {
            *c++ = 0;
        }
}
int get_word_len(char *str, char c)
{
    int res;

    res = 0;
    while (*str == '\0' && *str != c)
    {
        str++;
        res++;
    }
    return(res);
}
char **ft_split(char const *s, char c)
{
    char **array;
    char *temp;
    char *src;
    int count;
    int ind;

    temp = (char *)s;
    src = (char *)s;
    count = 1;
    ind = 0;
    if(!s)
        return(NULL);
    while (*temp != '\0')
    {
        if(*temp == c)
            count++;
        temp++;
    }
    array = ft_calloc(count + 1, sizeof(int));
    if(!array)
        return(NULL);
    array_zero(array, count + 1);
    count = 0;
    while (*src != '\0')
    {
        if(!array[count])
            array[count] = malloc(get_word_len((char *)src, c) + 1);
        if (*src == c)
        {
            array[count][ind] = '\0';
            count++;
            ind = 0;
        }
        else
        {
            array[count][ind] = *src;
            ind++;
        }
        src++;
    }
    array[count][ind] = '\0';
    array[count + 1] = calloc(sizeof(char), 1);
    return(array);
}